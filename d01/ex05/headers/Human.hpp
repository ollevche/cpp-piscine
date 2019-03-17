// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:48:44 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 15:48:44 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {

	private:
		const Brain brain;

	public:
		std::string identify() const;
		const Brain & getBrain() const;
};

#endif
