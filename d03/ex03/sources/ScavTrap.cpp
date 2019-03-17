// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:21 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:21 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include <cmath>

const std::string ScavTrap::challenges[CHALLS_COUNT] = {"I[1]", "have[2]",
					"no[3]", "imagination[4]", "for[5]", "challenges[6]"};

/*
**  constructors, destructor:
*/

ScavTrap::ScavTrap() {
	initStats();
	name = "unnamed";
	std::cout << "Created ScavTrap " << name << " !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	initStats();
	this->name = name;
	std::cout << "Created ScavTrap " << name << " !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;
	std::cout << "Created ScavTrap " << name << " !" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is dead !" << std::endl;
}

/*
**  methods:
*/

void    ScavTrap::initStats() {
	std::srand(std::time(nullptr));
	hits = 100;
	maxHits = 100;
	energy = 50;
	maxEnergy = 100;
	level = 1;
	meleeDamage = 20;
	rangeDamage = 15;
	armor = 3;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangeDamage << " points of damage !";
	std::cout << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << name << " attacks " << target;
	std::cout << ", causing " << meleeDamage << " points of damage !";
	std::cout << std::endl;
}

void	ScavTrap::challengeNewcomer() const {
	std::cout << "SC4V-TP picked challenge: " << challenges[rand() % CHALLS_COUNT] << std::endl;
}
