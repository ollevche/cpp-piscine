// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 14:39:53 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 14:39:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(void) {
    std::string message = "HI THIS IS BRAIN";
    std::string *messageP = &message;
    std::string &messageR = message;

    // std::cout << "str:\t" << message << std::endl;
    std::cout << "ptr:\t" << *messageP << std::endl;
    std::cout << "ref:\t" << messageR << std::endl;
}
