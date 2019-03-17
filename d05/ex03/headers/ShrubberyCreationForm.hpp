// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 15:56:52 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 15:56:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "general.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

		virtual void	action() const;

};

#endif
