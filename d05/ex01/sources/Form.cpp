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

Form::Form() : name("DEFAULT"), signPerm(0), exePerm(0) {
	withSign = false;
}

Form::Form(Form const & src) : name(src.name), signPerm(src.signPerm), exePerm(src.signPerm) {
	*this = src;
}

Form::Form(std::string name, int sign, int exe) : name(name), signPerm(sign), exePerm(exe) {
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

Form & Form::operator=(Form const & src) {
	if (src.signPerm > signPerm)
		throw Form::GradeTooLowException();
	withSign = src.withSign;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Form & form) {
	os << form.getName();
	os << " permissions (sign - exec): ";
	os << form.getSignPermission() << " - " << form.getExePermission() << ". ";
	if (form.isSigned())
		os << "Not signed.";
	else
		os << "Signed.";
	os << std::endl;
	return os;
}
