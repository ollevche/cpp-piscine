// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 20:38:47 by ollevche          #+#    #+#             //
//   Updated: 2018/10/04 20:38:48 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap{

	public:

		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	ninjaShoebox(NinjaTrap & enemy);
		void	ninjaShoebox(ScavTrap & enemy);
		void	ninjaShoebox(FragTrap & enemy);
		void	ninjaShoebox(ClapTrap & enemy);

	protected:

		void	initStats();

};

#endif
