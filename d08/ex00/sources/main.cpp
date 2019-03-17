// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 13:21:52 by ollevche          #+#    #+#             //
//   Updated: 2018/10/12 13:21:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <list>
#include <set>
#include <stack>

int main() {
	std::list<int>	list;
	std::set<int>	set;
	std::stack<int>	stack;

	list.push_back(1);
	list.push_back(99);

	set.insert(2);
	set.insert(99);

	std::cout << easyfind(list, 99) << std::endl;
	std::cout << easyfind(set, 99) << std::endl;
}
