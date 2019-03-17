// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:21 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:21 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <cmath>

/*
**  constructors, operator=, destructor:
*/

ClapTrap::ClapTrap() {
	initStats();
	name = "unnamed";
	std::cout << "Created ClapTrap " << name << " !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	initStats();
	this->name = name;
	std::cout << "Created ClapTrap " << name << " !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	std::cout << "Created ClapTrap " << name << " !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	this->initStats(src);
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " is dead !" << std::endl;
}

/*
**  methods:
*/

void    ClapTrap::initStats(ClapTrap const & src) {
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

void    ClapTrap::initStats() {
	std::srand(std::time(nullptr));
	hits = 100;
	maxHits = 100;
	energy = 100;
	maxEnergy = 100;
	level = 100;
	meleeDamage = 100;
	rangeDamage = 100;
	armor = 100;
}

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "CL4P-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangeDamage << " points of damage !";
	std::cout << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "CL4P-TP " << name << " attacks " << target;
	std::cout << ", causing " << meleeDamage << " points of damage !";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << name << " receives " << amount << " damage. ";
	std::cout << "Hit points decreased from " << hits << " to ";
	amount -= roundf((float)amount / 100 * armor);
	hits -= amount;
	if (hits < 0)
		hits = 0;
	std::cout << hits << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << name << " receives " << amount << " restoring points. ";
	std::cout << "Hit points increased from " << hits << " to ";
	hits += amount;
	if (hits > maxHits)
		hits = maxHits;
	std::cout << hits << std::endl;
}
