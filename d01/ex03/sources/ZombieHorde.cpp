// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 13:59:57 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 13:59:57 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->size = n;
	std::srand(std::time(nullptr));
	if (n > 0)
		this->horde = new Zombie[n];
}

ZombieHorde::~ZombieHorde(void) {
	if (this->size > 0)
		delete [] this->horde;
}

void ZombieHorde::announce(void) {
	for (int i = 0; i < this->size; i++)
		this->horde[i].announce();
}
