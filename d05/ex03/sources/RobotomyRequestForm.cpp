// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:22:16 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 16:22:16 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define RRF RobotomyRequestForm

RRF::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	/* EMPTY */
}

RRF::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45) {
	/* EMPTY */
}

RRF::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
	/* EMPTY */
}

RRF::~RobotomyRequestForm() {
	/* EMPTY */
}

void RRF::action() const {
	std::cout << "*drilling noises*" << std::endl;
	std::cout << target << " has been robotomized ";
	if (std::rand() % 2 == 0)
		std::cout << "un";
	std::cout << "successfully" << std::endl;
}
