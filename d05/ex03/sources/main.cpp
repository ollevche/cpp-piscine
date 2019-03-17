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
	std::srand(time(NULL));

	Bureaucrat & bur = *(new Bureaucrat("Hermes Conrad", 5));
	Form *form;
	Intern intern;

	form = intern.makeForm("shrubbery creation", "Home");
	bur.signForm(*form);
	bur.executeForm(*form);
	delete form;

	form = intern.makeForm("robotomy request", "Human");
	bur.signForm(*form);
	bur.executeForm(*form);
	delete form;

	form = intern.makeForm("presidential pardon", "Douglas Adams");
	bur.signForm(*form);
	bur.executeForm(*form);
	delete form;

	form = intern.makeForm("invalid paper", "undefined");

	delete &bur;
}
