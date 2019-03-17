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

	Bureaucrat & bur = *(new Bureaucrat("Hermes Conrad", 150));
	Form *form;

	form = new Form("empty paper", 150, 150);
	bur.signForm(*form);
	delete form;

	form = new Form ("156 pages form", 75, 50);
	bur.signForm(*form);

	bur.setGrade(1);
	bur.signForm(*form);
	delete form;

	delete &bur;
}
