// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 11:36:07 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 11:36:07 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void ponyOnTheHeap(void) {
    std::cout << "Act 1. Heap" << std::endl;
    Pony* pony = new Pony();
    std::string bye = "Bye...";
    pony->fly();
    pony->say(bye);
    delete pony;
}

void ponyOnTheStack(void) {
    std::cout << "Act 2. Stack" << std::endl;
    Pony pony;
    std::string bye = "Bye...";
    pony.fly();
    pony.say(bye);
}

int main(void) {
    ponyOnTheHeap();
    ponyOnTheStack();
    // system("leaks pony");
}