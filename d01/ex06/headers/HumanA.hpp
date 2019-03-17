// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:49:37 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:49:38 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "violence.hpp"

class HumanA {

	private:
		Weapon &		weapon;
		std::string		name;

	public:
		HumanA(std::string name, Weapon & weapon);
		void	attack();
};

#endif
