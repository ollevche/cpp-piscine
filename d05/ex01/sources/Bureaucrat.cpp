// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 14:26:58 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 14:26:58 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("empty"),  grade(150) {
	/* DEFAULT */
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name) {
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
	/* DEFAULT */
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::confirmGrade(int num) {
	if (num > LOWEST)
		throw GradeTooLowException();
	else if (num < HIGHEST)
		throw GradeTooHighException();
}

void Bureaucrat::setGrade(int num) {
	confirmGrade(num);
	grade = num;
}

void Bureaucrat::upgrade() {
	setGrade(grade - 1);
}


void Bureaucrat::downgrade() {
	setGrade(grade + 1);
}

void Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << name << " signs " << form.getName() << "." << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << name << " cannot sign " << form.getName() << " because his grade is too low." << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	grade = src.grade;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bur) {
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return os;
}
