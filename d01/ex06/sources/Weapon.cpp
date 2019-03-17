// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:51:03 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:51:04 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "violence.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

const std::string &	Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}
