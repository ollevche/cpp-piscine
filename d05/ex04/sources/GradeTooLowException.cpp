// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GradeTooLowException.cpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 15:22:30 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 15:22:30 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

#define BGTLE Bureaucrat::GradeTooLowException
#define FGTLE Form::GradeTooLowException

BGTLE::GradeTooLowException() {
	/* DEFAULT */
}

BGTLE::GradeTooLowException(GradeTooLowException const & src) {
	*this = src;
}

BGTLE::~GradeTooLowException() throw() {
	/* DEFAULT */
}

const char* BGTLE::what() const throw() {
	return "Bureaucrat: Grade is lower than 150.";
}

FGTLE::GradeTooLowException() {
	/* DEFAULT */
}

FGTLE::GradeTooLowException(GradeTooLowException const & src) {
	*this = src;
}

FGTLE::~GradeTooLowException() throw() {
	/* DEFAULT */
}

const char* FGTLE::what() const throw() {
	return "Form: Grade is lower than needed.";
}
