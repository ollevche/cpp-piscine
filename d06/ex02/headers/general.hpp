// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 17:06:27 by ollevche          #+#    #+#             //
//   Updated: 2018/10/10 17:06:28 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GENERAL_HPP
# define GENERAL_HPP

# include <iostream>

class Base {

	public:
		virtual ~Base();
};

class A : public Base { };
class B : public Base { };
class C : public Base { };

#endif
