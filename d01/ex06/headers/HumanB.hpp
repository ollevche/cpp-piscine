// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:49:52 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:49:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "violence.hpp"

class HumanB {

	private:
		Weapon			*weapon;
        std::string		name;

	public:
		HumanB(std::string name);
        void	setWeapon(Weapon & weapon);
		void	attack();
};

#endif
