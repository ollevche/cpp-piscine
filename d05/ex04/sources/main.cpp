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
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;

	std::srand(time(NULL));
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try {
		ob.doBureaucracy("shrubbery creation", "Pigley");
	}
	catch (OfficeBlock::NotStuffedException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
