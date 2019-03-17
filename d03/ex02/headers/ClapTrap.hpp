// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:47 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:48 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:

		std::string	name;

		int		hits;
		int		maxHits;
		int		energy;
		int		maxEnergy;
		int		level;
		int		meleeDamage;
		int		rangeDamage;
		int		armor;

		void	initStats();
		void	initStats(ClapTrap const & src);

};

#endif
