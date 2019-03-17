// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:49:10 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 15:49:11 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

const Brain & Human::getBrain() const {
	return this->brain;
}

std::string Human::identify() const {
	return this->brain.identify();
}
