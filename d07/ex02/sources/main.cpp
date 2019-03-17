// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 14:17:22 by ollevche          #+#    #+#             //
//   Updated: 2018/10/11 14:17:22 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Array.hpp"

int main() {
	Array<int> arr = Array<int>(5);
	Array<int> arr1;

	arr[3] = 1;
	arr1 = arr;
	arr1[3] = 2;
	std::cout << arr[3] << std::endl;
	std::cout << arr1[3] << std::endl;
	std::cout << arr1[0] << std::endl;
	try {
		std::cout << arr[-1] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
