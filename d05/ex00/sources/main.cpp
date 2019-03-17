// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 14:27:20 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 14:27:21 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat bur;
	Bureaucrat *burPtr;

	try {
		bur = Bureaucrat("invalid", 0);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		bur = Bureaucrat("invalid", 151);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	burPtr = new Bureaucrat("Hermes Conrad", 150);

	try {
		burPtr->downgrade();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	burPtr->setGrade(1);

	try {
		bur.upgrade();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << burPtr << std::endl;
	std::cout << *burPtr << std::endl;

	delete burPtr;
}
