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

#define GTHE Bureaucrat::GradeTooHighException

GTHE::GradeTooHighException() {
	/* DEFAULT */
}

GTHE::GradeTooHighException(GradeTooHighException const & src) {
	*this = src;
}

GTHE::~GradeTooHighException() throw() {
	/* DEFAULT */
}

const char* GTHE::what() const throw() {
	return "GradeTooHighException has been thrown";
}
