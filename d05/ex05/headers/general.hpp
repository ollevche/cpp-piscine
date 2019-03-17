// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 20:01:50 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 20:01:50 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GENERAL_HPP
# define GENERAL_HPP

# define HIGHEST	1
# define LOWEST		150

# include <iostream>
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"
# include "OfficeBlock.hpp"
# include "CentralBureaucracy.hpp"

struct ListElement {

	public:

		ListElement(std::string target);

		void			setPrev(ListElement *elem);
		void			setNext(ListElement *elem);
		bool			isFirst() const;
		bool			isLast() const;
		ListElement		*getPrev() const;
		ListElement		*getNext() const;
		std::string 	getTarget() const;
		ListElement		*add(std::string target);
		ListElement		*unlink(); // returns next elem

	private:

		ListElement		*prev;
		std::string     target;
		ListElement		*next;
};

#endif
