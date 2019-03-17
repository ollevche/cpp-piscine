// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 13:22:09 by ollevche          #+#    #+#             //
//   Updated: 2018/10/12 13:22:09 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>

template <typename C>
int easyfind (C & container, int target) {
	typename C::iterator it;

	it = find(container.begin(), container.end(), target);
	if (it == container.end())
		throw std::invalid_argument("Element not found");
	return *it;
}

#endif
