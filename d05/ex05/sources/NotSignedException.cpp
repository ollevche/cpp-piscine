// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NotSignedException.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 17:32:52 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 17:32:52 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define NSE Form::NotSignedException

NSE::NotSignedException() {
	/* DEFAULT */
}

NSE::NotSignedException(NotSignedException const & src) {
	*this = src;
}

NSE::~NotSignedException() throw() {
	/* DEFAULT */
}

const char* NSE::what() const throw() {
	return "Form: Cannot be executed (Not signed).";
}
