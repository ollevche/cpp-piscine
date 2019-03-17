// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ListElement.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 20:50:09 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 20:50:09 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

ListElement::ListElement(std::string target) : target(target) {
	prev = NULL;
	next = NULL;
}

ListElement *ListElement::add(std::string target) {
	ListElement *newElem;

	newElem = new ListElement(target);
	newElem->setPrev(this);
	next = newElem;
	return newElem;
}

void ListElement::setPrev(ListElement *elem) {
	prev = elem;
}

void ListElement::setNext(ListElement *elem) {
	next = elem;
}

bool ListElement::isFirst() const {
	return (prev == NULL);
}

bool ListElement::isLast() const {
	return (next == NULL);
}

ListElement *ListElement::getPrev() const {
	return prev;
}

ListElement *ListElement::getNext() const {
	return next;
}

std::string ListElement::getTarget() const {
	return target;
}

ListElement *ListElement::unlink() {
	ListElement *retNextElem;

	retNextElem = next;
	if (prev != NULL)
		prev->setNext(next);
	if (next != NULL)
		next->setPrev(prev);
	prev = NULL;
	next = NULL;
	delete this;
	return retNextElem;
}
