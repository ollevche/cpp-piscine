// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 18:54:29 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 18:54:29 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP

# include "general.hpp"

class Intern {

	public:

		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & src);

		Form *makeForm(std::string formName, std::string target);

};

#endif
