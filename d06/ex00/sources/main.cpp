// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 15:43:18 by ollevche          #+#    #+#             //
//   Updated: 2018/10/10 15:43:18 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cctype>
#include <iomanip>
#include <math.h>

void print_char(double value) {
	int	c;

	c = static_cast<int>(value);
	std::cout << "char: ";
	if (c > CHAR_MAX || c < CHAR_MIN)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(c) << "'";
	std::cout << std::endl;
}

void print_int(double value) {
	std::cout << "int: ";
	if (value > static_cast<double>(INT_MAX) + 1 ||
		value < static_cast<double>(INT_MIN) - 1 ||
		isnan(value))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void print_float(double value) {
	std::cout << "float: " << static_cast<float>(value) << "f"<< std::endl;
}

void print_double(double value) {
	std::cout << "double: " << value << std::endl;
}

int main (int argc, char **args) {
	double	value;

	if (argc < 2)
		return 0;
	value = atof(args[1]);
	print_char(value);
	print_int(value);
	std::cout << std::fixed << std::setprecision(1);
	print_float(value);
	print_double(value);
}
