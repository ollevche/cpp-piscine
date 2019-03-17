// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 15:58:42 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 15:58:42 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "general.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();

		virtual void	action() const;

};

#endif
