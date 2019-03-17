// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:23:15 by ollevche          #+#    #+#             //
//   Updated: 2018/10/02 12:23:15 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "general.hpp"

# define DEF_TYPE "Broken Zombie"

class Zombie {

    private:
        std::string name;
        std::string type;

    public:
        Zombie(std::string type = DEF_TYPE);
    	Zombie(std::string name, std::string type = DEF_TYPE);
        bool	setType(std::string type);
        bool	setName(std::string name);
        void	announce() const;
};

#endif
