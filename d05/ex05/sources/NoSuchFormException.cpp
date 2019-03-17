// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NoSuchFormException.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 19:28:49 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 19:28:49 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define NSFE Intern::NoSuchFormException

NSFE::NoSuchFormException() {
	/* DEFAULT */
}

NSFE::NoSuchFormException(NoSuchFormException const & src) {
	*this = src;
}

NSFE::~NoSuchFormException() throw() {
	/* DEFAULT */
}

const char* NSFE::what() const throw() {
	return "Intern: Form not found.";
}
