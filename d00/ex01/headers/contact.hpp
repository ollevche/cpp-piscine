// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   contact.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:27:03 by ollevche          #+#    #+#             //
//   Updated: 2018/10/01 14:27:03 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "pbook.hpp"

class Contact {

	private:
		std::string	information[FIELD_NUM];
		int			index;

	public:
		bool	receiveFromUser(void);
		void	shortPrint(void);
		void	fullPrint(void);
		void	setIndex(int index);
};

#endif