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
**  constructors, operator=, destructor:
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

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	this->initStats(src);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is dead !" << std::endl;
}

/*
**  methods:
*/

void    ScavTrap::initStats(ScavTrap const & src) {
	hits = src.hits;
	maxHits = src.maxHits;
	energy = src.energy;
	maxEnergy = src.maxEnergy;
	level = src.level;
	meleeDamage = src.meleeDamage;
	rangeDamage = src.rangeDamage;
	armor = src.armor;
	name = src.name;
}

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

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SC4V-TP " << name << " receives " << amount << " damage. ";
	std::cout << "Hit points decreased from " << hits << " to ";
	amount -= roundf((float)amount / 100 * armor);
	hits -= amount;
	if (hits < 0)
		hits = 0;
	std::cout << hits << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP " << name << " receives " << amount << " restoring points. ";
	std::cout << "Hit points increased from " << hits << " to ";
	hits += amount;
	if (hits > maxHits)
		hits = maxHits;
	std::cout << hits << std::endl;
}

void	ScavTrap::challengeNewcomer() const {
	std::cout << "SC4V-TP picked challenge: " << challenges[rand() % CHALLS_COUNT] << std::endl;
}
