// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:35 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:35 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int main() {
    FragTrap frag = FragTrap("ally");

    frag.meleeAttack("enemy");
    frag.rangedAttack("enemy");
    frag.kamikadzeAttack("enemy");
    frag.whoIsDeadAttack("enemy");
    frag.vampireAttack("enemy");
    frag.beRepaired(100);
    for (int i = 0; i < 5; i++)
        frag.vaulthunter_dot_exe("dummy target");
}