// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:47 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:48 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

#define CHALLS_COUNT 6

class ScavTrap {

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer() const;

	private:

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
		void	initStats(ScavTrap const & src);

		static const std::string challenges[CHALLS_COUNT];
};

#endif
