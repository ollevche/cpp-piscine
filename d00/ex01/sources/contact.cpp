// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:25:41 by ollevche          #+#    #+#             //
//   Updated: 2018/10/01 14:25:41 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "pbook.hpp"
#include <iomanip>

const std::string titles[FIELD_NUM] = {
	"first name", "last name", "nickname", "login", "postal address",
	"email address", "phone number", "birthday date", "favorite meal",
	"underwear color", "darkest secret"
};

bool	Contact::receiveFromUser(void) {
	for(int i = 0; i < FIELD_NUM; i++)
	{
		std::cout << titles[i] << ": ";
		if (!std::getline(std::cin, this->information[i]))
		{
			std::cout << std::endl;
			return false;
		}
	}
	return true;
}

void	Contact::shortPrint(void) {
	std::string sub;

	std::cout << '|' << std::setw(COL_LEN) << std::right << this->index << '|';
	for (int i = 0; i < 3; i++) {
		sub = this->information[i].substr(0, COL_LEN);
		if (this->information[i].size() > COL_LEN)
			sub = sub.replace(9, 1, ".");
		std::cout << std::setw(COL_LEN) << std::right << sub << '|';
	}
	std::cout << std::endl;
}

void	Contact::fullPrint(void) {
	for (int i = 0; i < FIELD_NUM; i++)
		std::cout << titles[i] << ": " << this->information[i] << std::endl;
}

void	Contact::setIndex(int index) {
	this->index = index;
}
