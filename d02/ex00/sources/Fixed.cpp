// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 20:33:02 by ollevche          #+#    #+#             //
//   Updated: 2018/10/03 20:33:02 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

Fixed::Fixed(void) : fixed_val(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	fixed_val = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_val;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_val = raw;
}
