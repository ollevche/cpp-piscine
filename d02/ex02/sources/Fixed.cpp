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

/*
**	constructors and destructor:
*/

Fixed::Fixed(void) : value(0) {
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::Fixed(const int num) : value(0) {
	value = (num & 0xffffff) << fractional;
}

Fixed::Fixed(const float num) : value(0) {
	value = roundf(num * std::pow(2, fractional));
}

Fixed::~Fixed(void) {
}

/*
**	methods:
*/

void Fixed::incrementValue() {
	float val;

	val = this->toFloat();
	val += 1 / std::pow(2, fractional);
	this->setRawBits(roundf(val * std::pow(2, fractional)));
}

void Fixed::decrementValue() {
	float val;

	val = this->toFloat();
	val -= 1 / std::pow(2, fractional);
	this->setRawBits(roundf(val * std::pow(2, fractional)));
}

int	Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
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


/*
**	operators:
*/

Fixed &	Fixed::operator=(Fixed const & src) {
	value = src.getRawBits();
	return *this;
}

/*
**	comparison op-s:
*/

bool Fixed::operator>(Fixed const & src) const {
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const & src) const {
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(Fixed const & src) const {
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const & src) const {
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(Fixed const & src) const {
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const & src) const {
	return (this->getRawBits() != src.getRawBits());
}

/*
**	arithmetic op-s
*/

Fixed Fixed::operator+(Fixed const & src) const {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(Fixed const & src) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(Fixed const & src) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed const & src) const {
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed & Fixed::operator++() {
	this->incrementValue();
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy;

	copy = Fixed(*this);
	++(*this);
	return copy;
}

Fixed & Fixed::operator--() {
	this->decrementValue();
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy;

	copy = Fixed(*this);
	--(*this);
	return copy;
}

/*
**	static methods:
*/

const Fixed & Fixed::max(Fixed const & first, Fixed const & second) {
	if (first > second)
		return first;
	return second;
}

const Fixed & Fixed::min(Fixed const & first, Fixed const & second) {
	if (first < second)
		return first;
	return second;
}
