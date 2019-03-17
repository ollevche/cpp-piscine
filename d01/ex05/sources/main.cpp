// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:49:22 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 15:49:23 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}
