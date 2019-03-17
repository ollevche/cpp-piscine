// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:06:19 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 16:06:19 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define SCF ShrubberyCreationForm

SCF::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	/* EMPTY */
}

SCF::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {
	/* EMPTY */
}

SCF::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
	/* EMPTY */
}

SCF::~ShrubberyCreationForm() {
	/* EMPTY */
}

void SCF::action() const {
	std::ofstream	file;
	std::string		filename;

	filename = target;
	filename.append("_shrubbery");
	file.open(filename);
	file << "\n\
       .#.\n\
      .###.\n\
     .#%##%.\n\
    .%##%###.\n\
   .##%###%##.\n\
  .#%###%##%##.\n\
        #\n\
        #\n" << std::endl;
	file.close();
}
