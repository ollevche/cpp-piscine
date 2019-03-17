// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:06:09 by ollevche          #+#    #+#             //
//   Updated: 2018/10/01 14:06:09 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int argc, char **args) {
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		for (int j = 0; args[i][j]; j++)
			std::cout << (char)toupper(args[i][j]);
	std::cout << std::endl;
}
