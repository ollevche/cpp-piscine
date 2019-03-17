// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CentralBureaucracy.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 20:54:14 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 20:54:14 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "general.hpp"

# define OFFICES 20

struct ListElement;

class CentralBureaucracy {

	public:

		CentralBureaucracy();
		CentralBureaucracy(CentralBureaucracy const & src);
		~CentralBureaucracy();
		CentralBureaucracy & operator=(CentralBureaucracy const & src);

		bool	hireBureaucrat(Bureaucrat & bur);
		void	queueUp(std::string person);
		void	doBureaucracy();
		void	doBureaucracyCycle();

	private:

		int					hired;
		OfficeBlock			blocks[OFFICES];
		ListElement			*waitingLine;

};

#endif
