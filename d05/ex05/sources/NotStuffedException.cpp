// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NotStuffedException.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 20:22:11 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 20:22:11 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

#define NSE OfficeBlock::NotStuffedException

NSE::NotStuffedException() {
	/* DEFAULT */
}

NSE::NotStuffedException(NotStuffedException const & src) {
	*this = src;
}

NSE::~NotStuffedException() throw() {
	/* DEFAULT */
}

const char* NSE::what() const throw() {
	return "OfficeBlock is not stuffed properly.";
}
