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

Fixed::Fixed(void) : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int num) : value(0) {
	std::cout << "Int constructor called" << std::endl;
	value = (num & 0xffffff) << fractional;
}

Fixed::Fixed(const float num) : value(0) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * std::pow(2, fractional));
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	value = src.value;
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat(void) const {
	float valflo;

	valflo = value / std::pow(2, fractional);
	return valflo;
}

int Fixed::toInt(void) const {
	int valint;

	valint = value >> fractional;
	return (valint);
}

std::ostream & operator<<(std::ostream & out, const Fixed & elem) {
	out << elem.toFloat();
	return out;
}
