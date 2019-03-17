// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 16:42:54 by ollevche          #+#    #+#             //
//   Updated: 2018/10/10 16:42:54 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

char getRandChar() {
	int		type;
	char	c;

	type = rand() % 3;
	switch (type) {
		case 0:
			c = rand() % 10 + 48;
			break;
		case 1:
			c = rand() % 25 + 65;
			break;
		case 2:
			c = rand() % 25 + 97;
			break;
	}
	return c;
}

std::string getRandStr() {
	std::string str;

	for (int i = 0; i < 8; i++)
		str += getRandChar();
	return str;
}

void * serialize( void ) {
	Data *data;

	data = new Data();
	data->s1 = getRandStr();
	data->n = std::rand();
	data->s2 = getRandStr();
	return static_cast<void*>(data);
}

Data * deserialize( void * raw ) {
	return static_cast<Data*>(raw);
}

int main( void ) {
	std::srand(time(NULL));
	Data* data = deserialize(serialize());
	std::cout << "s1:\t" << data->s1 << "\ns2:\t" << data->s2 << "\nn:\t" << data->n;
	std::cout << std::endl;
	delete data;
}
