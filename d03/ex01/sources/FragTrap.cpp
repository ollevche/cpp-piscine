// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:21 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:21 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <cmath>

#define ATTACK_COUNT 5

/*
**  constructors, operator=, destructor:
*/

FragTrap::FragTrap() {
	initStats();
	name = "unnamed";
	std::cout << "Created FlagTrap " << name << " !" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	initStats();
	this->name = name;
	std::cout << "Created FlagTrap " << name << " !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
	std::cout << "Created FlagTrap " << name << " !" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	this->initStats(src);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " is dead !" << std::endl;
}

/*
**  methods:
*/

void    FragTrap::initStats(FragTrap const & src) {
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

void    FragTrap::initStats() {
	std::srand(std::time(nullptr));
	hits = 100;
	maxHits = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	meleeDamage = 30;
	rangeDamage = 20;
	armor = 5;
}

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangeDamage << " points of damage !";
	std::cout << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target;
	std::cout << ", causing " << meleeDamage << " points of damage !";
	std::cout << std::endl;
}

void	FragTrap::vampireAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks as vampire:" << std::endl;
	meleeAttack(target);
	beRepaired(meleeDamage);
}

void	FragTrap::kamikadzeAttack(std::string const & target) {
	int meleeDamageCopy;

	std::cout << "FR4G-TP " << name << "'s KAAAAAAAMIKADZE ATTACK:" << std::endl;
	meleeDamageCopy = meleeDamage;
	meleeDamage = hits;
	meleeAttack(target);
	takeDamage(meleeDamage);
	meleeDamage = meleeDamageCopy;
}

void	FragTrap::whoIsDeadAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " bets " << target << " will be killed" << std::endl;
	if (rand() % 2)
	{
		std::cout << "It was DEADLY bet:" << std::endl;
		takeDamage(hits * 10);
	}
	else
		std::cout << name << " is so lucky. " << target << " is dead" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP " << name << " receives " << amount << " damage. ";
	std::cout << "Hit points decreased from " << hits << " to ";
	amount -= roundf((float)amount / 100 * armor);
	hits -= amount;
	if (hits < 0)
		hits = 0;
	std::cout << hits << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << name << " receives " << amount << " restoring points. ";
	std::cout << "Hit points increased from " << hits << " to ";
	hits += amount;
	if (hits > maxHits)
		hits = maxHits;
	std::cout << hits << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	AttackFuncPtr attacks[ATTACK_COUNT] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack,
											 &FragTrap::vampireAttack, &FragTrap::kamikadzeAttack, &FragTrap::whoIsDeadAttack};
	int index;

	if (energy < 25)
	{
		std::cout << "FR4G-TP " << name << " is out of energy !" << std::endl;
		return ;
	}
	index = std::rand() % ATTACK_COUNT;
	(this->*attacks[index])(target);
	energy -= 25;
	std::cout << "FR4G-TP " << name << " has " << energy << " energy points now !" << std::endl;
}
