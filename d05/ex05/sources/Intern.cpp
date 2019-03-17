// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 18:58:36 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 18:58:36 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

# define SCF "shrubbery creation"
# define RRF "robotomy request"
# define PPF "presidential pardon"

Intern::Intern() {
	/* EMPTY */
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {
	/* EMPTY */
}

Intern & Intern::operator=(Intern const & src) {
	(void)src;
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string target) {
	Form *form = NULL;

	if (formName.compare(SCF) == 0)
		form = new ShrubberyCreationForm(target);
	else if (formName.compare(RRF) == 0)
		form = new RobotomyRequestForm(target);
	else if (formName.compare(PPF) == 0)
		form = new PresidentialPardonForm(target);
	else
		throw Intern::NoSuchFormException();
	std::cout << "Intern creates " << *form << std::endl;
	return form;
}
