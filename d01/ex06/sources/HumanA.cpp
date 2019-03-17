// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:50:57 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:50:57 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "violence.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : weapon(weapon), name(name) {
    /* empty constructor */
}

void HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
