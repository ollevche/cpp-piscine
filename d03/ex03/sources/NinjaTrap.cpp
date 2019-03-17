// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:21 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:21 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"
#include <cmath>

/*
**  constructors, destructor:
*/

NinjaTrap::NinjaTrap() {
	initStats();
	name = "unnamed";
	std::cout << "Created NinjaTrap " << name << " !" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
	initStats();
	this->name = name;
	std::cout << "Created NinjaTrap " << name << " !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	*this = src;
	std::cout << "Created NinjaTrap " << name << " !" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap " << name << " is dead !" << std::endl;
}

/*
**  methods:
*/

void    NinjaTrap::initStats() {
	std::srand(std::time(nullptr));
	hits = 60;
	maxHits = 60;
	energy = 120;
	maxEnergy = 120;
	level = 1;
	meleeDamage = 60;
	rangeDamage = 5;
	armor = 0;
}

void	NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "NINJA-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangeDamage << " points of damage !";
	std::cout << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "NINJA-TP " << name << " attacks " << target;
	std::cout << ", causing " << meleeDamage << " points of damage !";
	std::cout << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & enemy) {
	std::cout << "Fight: " << name << " VS " << enemy.getName() << std::endl;
	std::cout << "ERROR: Friendly fire is not allowed here" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap & enemy) {
	this->meleeAttack(enemy.getName());
}

void	NinjaTrap::ninjaShoebox(FragTrap & enemy) {
	enemy.vaulthunter_dot_exe(name);
}

void	NinjaTrap::ninjaShoebox(ClapTrap & parent) {
	std::cout << parent.getName() << ": I'm your parent, " << name << "..." << std::endl;
}
