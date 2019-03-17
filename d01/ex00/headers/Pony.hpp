// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 11:35:44 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 11:35:45 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

	public:
		Pony(void);
		~Pony(void);
		void fly(void);
		void say(std::string const & smth);
		void grow(void);

	private:
		int age;
};

#endif
