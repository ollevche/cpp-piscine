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

Bureaucrat::Bureaucrat() : name("DEFAULT") {
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

void Bureaucrat::setGrade(int num) {
	if (num > LOWEST)
		throw GradeTooLowException();
	else if (num < HIGHEST)
		throw GradeTooHighException();
	grade = num;
}

void Bureaucrat::upgrade() {
	setGrade(grade - 1);
}


void Bureaucrat::downgrade() {
	setGrade(grade + 1);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	grade = src.grade;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bur) {
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return os;
}
