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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ScavTrap scav = ScavTrap("john");
    FragTrap frag = FragTrap("tommy");

    scav.meleeAttack("enemy[0]");
    scav.rangedAttack("enemy[0]");
    scav.beRepaired(100);
    scav.challengeNewcomer();

    frag.meleeAttack("enemy[1]");
    frag.rangedAttack("enemy[1]");
    frag.kamikadzeAttack("enemy[1]");
    frag.whoIsDeadAttack("enemy[1]");
    frag.vampireAttack("enemy[1]");
    frag.beRepaired(100);
    for (int i = 0; i < 5; i++)
        frag.vaulthunter_dot_exe("dummy target");
}
