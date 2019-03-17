// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 11:35:53 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 11:35:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(void) : age(0) {
	std::cout << "Pony: *exists*" << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Pony: *dies*" <<  std::endl;
}

void Pony::fly(void) {
	std::cout << "Pony: *flies*" << std::endl;
}

void Pony::say(std::string const & smth) {
	std::cout << "Pony: " << smth << std::endl;
}

void Pony::grow(void) {
	this->age++;
}
