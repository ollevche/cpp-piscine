// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 14:17:11 by ollevche          #+#    #+#             //
//   Updated: 2018/10/12 14:17:12 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Span.hpp"

#define CAPACITY 10000

void fillSpan(Span & span) {
	for (int i = CAPACITY - 2; i >= 0; i--)
		span.addNumber((i + i) * 2);
}

void pdfTest() {
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main() {
	Span span = Span(CAPACITY);

	fillSpan(span);
	span.addNumber(12);
	std::cout << span.shortestSpan() << " " << span.longestSpan() << std::endl;
	try {
		span.addNumber(101);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	pdfTest();
}