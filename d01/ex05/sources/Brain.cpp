// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:48:59 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 15:48:59 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

std::string Brain::identify() const {
    std::stringstream	stream;

    stream << this;
    return stream.str();
}
