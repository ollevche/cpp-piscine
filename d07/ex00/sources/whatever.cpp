// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:53:25 by ollevche          #+#    #+#             //
//   Updated: 2018/10/11 13:53:25 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <class T>
void swap(T & first, T & second) {
	T copy;

	copy = first;
	first = second;
	second = copy;
}

template <class T>
T min(T & first, T & second) {
	return (first < second ? first : second);
}

template <class T>
T max(T & first, T & second) {
	return (first > second ? first : second);
}

int main() {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
