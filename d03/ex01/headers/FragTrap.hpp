// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:47 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:48 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>


class FragTrap {

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap &	operator=(FragTrap const & src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	vampireAttack(std::string const & target);
		void	kamikadzeAttack(std::string const & target);
		void	whoIsDeadAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);

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
		void	initStats(FragTrap const & src);
};

typedef void (FragTrap::*AttackFuncPtr)(std::string const & target);

#endif
