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

# include "ClapTrap.hpp"

# define CHALLS_COUNT 6

class ScavTrap : public ClapTrap{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	challengeNewcomer() const;

	protected:

		void	initStats();

	private:

		static const std::string challenges[CHALLS_COUNT];
};

#endif
