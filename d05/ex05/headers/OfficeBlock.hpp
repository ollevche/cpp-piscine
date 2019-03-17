// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 19:31:23 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 19:31:23 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "general.hpp"

class OfficeBlock {

	public:

		OfficeBlock();
		OfficeBlock(Intern & intern, Bureaucrat & signBur, Bureaucrat & exeBur);
		~OfficeBlock();

		void	setIntern(Intern & intern);
		void	setSigner(Bureaucrat & signBur);
		void	setExecutor(Bureaucrat & exeBur);
		void	doBureaucracy(std::string formName, std::string target);

		class NotStuffedException : public std::exception {

			public:

				NotStuffedException();
				NotStuffedException(NotStuffedException const & src);
				virtual ~NotStuffedException() throw();

				virtual const char* what() const throw();

		};

	private:

		Intern		intern;
		Bureaucrat	*signBur;
		Bureaucrat	*exeBur;

};

#endif
