// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 20:33:22 by ollevche          #+#    #+#             //
//   Updated: 2018/10/03 20:33:23 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

std::ostream & operator<<(std::ostream & out, const Fixed & elem) {
	out << elem.toFloat();
	return out;
}

Fixed & max(Fixed & first, Fixed & second) {
	if (first > second)
		return first;
	return second;
}

Fixed & min(Fixed & first, Fixed & second) {
	if (first < second)
		return first;
	return second;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
