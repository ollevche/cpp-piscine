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

#define GTLE Bureaucrat::GradeTooLowException

GTLE::GradeTooLowException() {
	/* DEFAULT */
}

GTLE::GradeTooLowException(GradeTooLowException const & src) {
	*this = src;
}

GTLE::~GradeTooLowException() throw() {
	/* DEFAULT */
}

const char* GTLE::what() const throw() {
	return "GradeTooLowException has been thrown";
}
