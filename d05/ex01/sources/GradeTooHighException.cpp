// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GradeTooHighException.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 15:22:24 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 15:22:24 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

#define BGTHE Bureaucrat::GradeTooHighException
#define FGTHE Form::GradeTooHighException

BGTHE::GradeTooHighException() {
	/* DEFAULT */
}

BGTHE::GradeTooHighException(GradeTooHighException const & src) {
	*this = src;
}

BGTHE::~GradeTooHighException() throw() {
	/* DEFAULT */
}

const char* BGTHE::what() const throw() {
	return "Bureaucrat: Grade is higher than 1.";
}

FGTHE::GradeTooHighException() {
	/* DEFAULT */
}

FGTHE::GradeTooHighException(GradeTooHighException const & src) {
	*this = src;
}

FGTHE::~GradeTooHighException() throw() {
	/* DEFAULT */
}

const char* FGTHE::what() const throw() {
	return "Form: Grade is higher than 1.";
}
