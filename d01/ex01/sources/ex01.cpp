// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:17:26 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:17:26 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void memoryLeak(void) {
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main(void) {
	memoryLeak();
	system("leaks memLeak");
}
