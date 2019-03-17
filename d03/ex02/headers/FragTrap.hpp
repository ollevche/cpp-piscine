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

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	vampireAttack(std::string const & target);
		void	kamikadzeAttack(std::string const & target);
		void	whoIsDeadAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);

	protected:

		void	initStats();
};

typedef void (FragTrap::*AttackFuncPtr)(std::string const & target);

#endif
