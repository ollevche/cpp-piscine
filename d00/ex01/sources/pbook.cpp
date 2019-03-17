// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   pbook.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:56:54 by ollevche          #+#    #+#             //
//   Updated: 2018/10/01 14:56:54 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "pbook.hpp"

static void	add(Contact contacts[MAX_CONS], int *size) {
	if (*size >= MAX_CONS)
	{
		std::cout << "You're not allowed to add more than 8 contacts." << std::endl;
		return;
	}
	if (!contacts[*size].receiveFromUser())
		return ;
	contacts[*size].setIndex(*size);
	(*size)++;
	std::cout << "Contact has been received successfuly." << std::endl;
}

static void	search(Contact contacts[MAX_CONS], int size) {
	int	picked;

	for (int i = 0; i < size; i++)
		contacts[i].shortPrint();
	std::cout << "Pick an index: ";
	std::cin >> picked;
	if(std::cin.fail()) {
		std::cout << "Enter a valid number next time..." << std::endl; 
		std::cin.clear();
		return;
	}
	std::cout << "You picked index: " << picked << std::endl;
	if (picked < 0 || picked >= size)
		std::cout << "There's no such index." << std::endl;
	else
		contacts[picked].fullPrint();
}

int			main(void) {
	Contact		contacts[MAX_CONS];
	int			size;
	std::string	command;

	std::cout << "Welcome to the phone book." << std::endl;
	size = 0;
	while (std::getline(std::cin, command) && command.compare(EXIT)) {
		if (!command.compare(ADD))
			add(contacts, &size);
		else if (!command.compare(SEARCH))
			search(contacts, size);
	}
	std::cout << "You're leaving the phone book now." << std::endl;
}