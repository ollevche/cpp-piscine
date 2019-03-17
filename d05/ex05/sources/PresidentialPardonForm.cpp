// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:27:36 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 16:27:37 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define PPF PresidentialPardonForm

PPF::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
	/* EMPTY */
}

PPF::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) {
	/* EMPTY */
}

PPF::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
	/* EMPTY */
}

PPF::~PresidentialPardonForm() {
	/* EMPTY */
}

void PPF::action() const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
