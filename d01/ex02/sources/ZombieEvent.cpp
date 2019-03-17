// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:22:50 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:22:51 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

ZombieEvent::ZombieEvent() : type("Event Zombie") {
	std::srand(std::time(nullptr));
}

bool ZombieEvent::setZombieType(std::string type) {
	this->type = type;
	return true;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	return new Zombie(name, this->type);
}

void ZombieEvent::randomChump() const {
	Zombie zombie = Zombie();

	zombie.setType(this->type);
	zombie.announce();
}
