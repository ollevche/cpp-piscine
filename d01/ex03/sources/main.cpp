// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 14:05:32 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 14:05:32 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

void hordeExample(void) {
    ZombieHorde horde = ZombieHorde(5);

    std::cout << "The horde of 5 is ready..." << std::endl;
    horde.announce();
}

int main(void) {
    hordeExample();
    // system("leaks z_horde");
}
