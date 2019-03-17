// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CentralBureaucracy.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 21:03:17 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 21:03:18 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define FORMS	3
#define TARGETS	5

std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
std::string targetNames[] = {"Home", "Bender", "Office", "Douglas Adams", "Human"};

CentralBureaucracy::CentralBureaucracy() : hired(0), waitingLine(NULL) {
	/* EMPTY */
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const & src) {
	*this = src;
}

CentralBureaucracy::~CentralBureaucracy() {
	ListElement *iterator;

	iterator = waitingLine;
	while (iterator)
		iterator = iterator->unlink();
}

CentralBureaucracy & CentralBureaucracy::operator=(CentralBureaucracy const & src) {
	ListElement *srcIter;
	ListElement *thisIter;

	srcIter = src.waitingLine;
	thisIter = new ListElement(srcIter->getTarget());
	while (srcIter) {
		thisIter = thisIter->add(srcIter->getTarget());
		srcIter = srcIter->getNext();
	}
	return *this;
}

bool CentralBureaucracy::hireBureaucrat(Bureaucrat & bur) {
	if (hired == OFFICES * 2)
	{
		std::cout << bur << " Not hired." << std::endl;
		return false;
	}
	if (hired % 2 == 0)
		blocks[hired / 2].setSigner(bur);
	else
		blocks[hired / 2].setExecutor(bur);
	std::cout << bur << " Hired." << std::endl;
	hired++;
	return true;
}

void CentralBureaucracy::queueUp(std::string person) {
	ListElement *iterator = waitingLine;

	if (waitingLine)
	{
		while (!iterator->isLast())
			iterator = iterator->getNext();
		iterator->add(person);
	}
	else
		waitingLine = new ListElement(person);
	std::cout << "Added in waiting line: " << person << std::endl;
}

void CentralBureaucracy::doBureaucracyCycle() {
	std::string form;
	std::string target;
	std::string visitor;

	if (hired < 2)
		std::cout << "Hire somebody first!" << std::endl;
	if (!waitingLine)
		std::cout << "No bureaucracy left to be done :(" << std::endl;
	if (hired < 2 || !waitingLine)
		return ;
	std::cout << "Bureaucracy cycle has been started..." << std::endl;
	for (int i = 0; i < hired / 2 && waitingLine; i++) {
		visitor = waitingLine->getTarget();
		std::cout << "Office Block #" << i << ", visitor is " << visitor << std::endl;
		form = formNames[rand() % FORMS];
		target = targetNames[rand() % TARGETS];
		blocks[i].doBureaucracy(form, target);
		waitingLine = waitingLine->unlink();
	}
	std::cout << "Bureaucracy cycle has been finished!" << std::endl;
	if (waitingLine)
		std::cout << "There's more visitors..." << std::endl;
	else
		std::cout << "No more visitors left!" << std::endl;
}

void CentralBureaucracy::doBureaucracy() {
	do {
		doBureaucracyCycle();
	} while (waitingLine && hired > 1);
}
