// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:23:04 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:23:04 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

static void showTypes(ZombieEvent & event) {
	Zombie *zombie;

	std::cout << "A zombie with default type:" << std::endl;
	zombie = event.newZombie("Shaun");
	zombie->announce();
	delete zombie;
	event.setZombieType("Brainless");
	std::cout << "Type has been set to 'Brainless'. Creating 5 more zombies:" << std::endl;
	for (int i = 0; i < 5; i++) {
		zombie = event.newZombie("Shaun");
		zombie->announce();
		delete zombie;
	}
}

static void showRandom(ZombieEvent & event) {
	std::cout << "Creating 5 random friends:" << std::endl;
	for (int i = 0; i < 5; i++)
		event.randomChump();
}

int main(void) {
	ZombieEvent event = ZombieEvent();

	showTypes(event);
	showRandom(event);
	system("leaks z_event");
}
