// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 17:11:37 by ollevche          #+#    #+#             //
//   Updated: 2018/10/10 17:11:38 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

Base::~Base() {
	/* EMPTY */
}

Base * generate(void) {
	int		type;
	Base	*bases[3] = {new A(), new B(), new C()};
	Base	*res;

	std::srand(time(NULL));
	type = rand() % 3;
	res = bases[type];
	for (int i = 0; i < 3; i++)
		if (type != i)
			delete bases[i];
	return res;
}

void identify_from_pointer( Base * p ) {
	Base		*results[3];
	std::string	names[3] = {"A", "B", "C"};

	results[0] = dynamic_cast<A*>(p);
	results[1] = dynamic_cast<B*>(p);
	results[2] = dynamic_cast<C*>(p);
	for (int i = 0; i < 3; i++)
		if (results[i] != NULL)
			std::cout << names[i] << std::endl;
}

void identify_from_reference( Base & p ) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast& bc) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast& bc) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast& bc) {

			}
		}
	}
}

int main(void) {
	Base *bptr = generate();
	Base &bref = *bptr;

	identify_from_pointer(bptr);
	identify_from_reference(bref);
	delete bptr;
}
