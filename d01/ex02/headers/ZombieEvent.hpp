// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:23:27 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:23:28 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "general.hpp"

class ZombieEvent {

    private:
        std::string type;

    public:
        ZombieEvent();
        bool	setZombieType(std::string type);
        Zombie*	newZombie(std::string name) const;
		void	randomChump() const;
};

#endif
