// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 14:17:03 by ollevche          #+#    #+#             //
//   Updated: 2018/10/12 14:17:04 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Span.hpp"

Span::Span() : capacity(0), array(0, 0) {
	sorted = false;
	shortest = longest = -1;
}

Span::Span(unsigned int capacity) : capacity(capacity), array(0, 0) {
	sorted = false;
	shortest = longest = -1;
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {
	/* EMPTY */
}

Span & Span::operator=(Span const & src) {
	capacity = src.capacity;
	array = src.array; // overoaded operator= by vector
	sorted = src.sorted;
	shortest = src.shortest;
	longest = src.longest;
	return *this;
}

void Span::addNumber(int num) {
	if (array.size() >= capacity)
		throw std::runtime_error("Cannot add element: vector is full");
	array.push_back(num);
	sorted = false;
}

int Span::shortestSpan() {
	if (!sorted)
		sort(array.begin(), array.end());
	shortest = INT_MAX;
	for (unsigned int i = 0; i < array.size() - 1 && shortest; i++)
		if (array[i + 1] - array[i] < shortest)
			shortest = array[i + 1] - array[i];
	return shortest;
}

int Span::longestSpan() {
	if (!sorted)
		sort(array.begin(), array.end());
	longest = array[array.size() - 1] - array[0];
	return longest;
}
