// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:49:27 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 21:49:27 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "violence.hpp"

class Weapon {

	private:
		std::string type;

	public:
		Weapon(std::string type);
		const std::string &	getType() const;
		void				setType(std::string type);

};

#endif