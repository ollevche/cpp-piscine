// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:22:34 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:22:35 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define NAME_POOL_SIZE 13

std::string names[NAME_POOL_SIZE] = {"BITER", "COLD BODY", "CREEPER", "DEAD ONE",
    "FLOATER", "GEEK", "LAMEBRAIN", "LURKER", "MONSTER", "ROAMER", "ROTTER",
    "SKIN EATER", "WALKER"};

static std::string randomName() {
    std::string	name;
	int			index;

	index = std::rand() % NAME_POOL_SIZE;
    name = names[index];
    return name;
}

Zombie::Zombie(std::string type) {
    this->name = randomName();
	this->type = type;
}

Zombie::Zombie(std::string name, std::string type){
    this->name = name;
    this->type = type;
}

bool Zombie::setType(std::string type) {
    this->type = type;
    return true;
}

bool Zombie::setName(std::string name) {
    this->name = name;
    return true;
}

void Zombie::announce(void) const {
    std::cout << "<" << this->name;
    std::cout << " (" << this->type;
    std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
}
