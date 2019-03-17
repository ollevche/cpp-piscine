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

#define BURS		2
#define LINESIZE	0

static void fillCB(CentralBureaucracy & cb) {
	Bureaucrat * bur = NULL;


	for (int i = 0; i < BURS; i++)
	{
		bur = new Bureaucrat("Hermes", 1);
		cb.hireBureaucrat(*bur);
	}
}

static void addLargeQueue(CentralBureaucracy & cb) {
	for (int i = 0; i < LINESIZE; i++)
		cb.queueUp("just a poor guy");
}

int main() {
	CentralBureaucracy & coreBur = *(new CentralBureaucracy());

	std::srand(time(NULL));
	fillCB(coreBur);
	addLargeQueue(coreBur);
	coreBur.doBureaucracy();
	delete &coreBur;
}
