// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:50:49 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:50:49 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "violence.hpp"

HumanB::HumanB(std::string name) : name(name) {
	/* empty constructor */
}

void HumanB::setWeapon(Weapon & weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
