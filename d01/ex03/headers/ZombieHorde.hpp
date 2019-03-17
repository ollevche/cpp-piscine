// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 14:00:06 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 14:00:06 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "general.hpp"

class ZombieHorde {

	private:
		int		size;
		Zombie	*horde;

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void announce(void);
};

#endif
