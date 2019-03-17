// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 20:15:13 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 20:15:13 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

Form::Form() : name("DEFAULT"), signPerm(0), exePerm(0), target("DEFAULT") {
	withSign = false;
}

Form::Form(Form const & src) : name(src.name), signPerm(src.signPerm), exePerm(src.signPerm), target(src.target) {
	*this = src;
}

Form::Form(std::string name, int sign, int exe) : name(name), signPerm(sign), exePerm(exe), target("DEFAULT") {
	withSign = false;
	Bureaucrat::confirmGrade(sign);
	Bureaucrat::confirmGrade(exe);
}

Form::Form(std::string name, std::string target, int sign, int exe) : name(name), signPerm(sign), exePerm(exe), target(target) {
	withSign = false;
	Bureaucrat::confirmGrade(sign);
	Bureaucrat::confirmGrade(exe);
}

Form::~Form() {
	/* DEFAULT */
}

void Form::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > signPerm)
		throw Form::GradeTooLowException();
	withSign = true;
}

int Form::getSignPermission() const {
	return signPerm;
}

int Form::getExePermission() const {
	return exePerm;
}

bool Form::isSigned() const {
	return withSign;
}

std::string Form::getName() const {
	return name;
}

void Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > exePerm)
		throw Form::GradeTooLowException();
	if (!withSign)
		throw Form::NotSignedException();
	action();
}

Form & Form::operator=(Form const & src) {
	if (src.signPerm > signPerm)
		throw Form::GradeTooLowException();
	withSign = src.withSign;
	return *this;
}

std::string Form::getTarget() const {
	return target;
}

std::ostream & operator<<(std::ostream & os, const Form & form) {
	os << form.getName();
	os << ". Permissions (sign - exec): ";
	os << form.getSignPermission() << " - " << form.getExePermission() << ". ";
	os << "Target: " << form.getTarget() << ". ";
	if (form.isSigned())
		os << "Signed.";
	else
		os << "Not signed.";
	return os;
}
