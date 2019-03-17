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
