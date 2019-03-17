// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 19:59:00 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 19:59:01 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

# include "general.hpp"

class Bureaucrat;

class Form {

	public:

		Form();
		Form(Form const & src);
		Form(std::string name, int sign, int exe);
		Form(std::string name, std::string target, int sign, int exe);
		virtual ~Form();

		void			beSigned(Bureaucrat const & bur);
		int				getSignPermission() const;
		int				getExePermission() const;
		bool			isSigned() const;
		std::string		getName() const;
		void			execute(Bureaucrat const & executor) const;
		std::string		getTarget() const;

		Form &	operator=(Form const & src);

		class GradeTooLowException : public std::exception {

			public:

				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const & src);
				virtual ~GradeTooLowException() throw();

				virtual const char* what() const throw();

		};

		class NotSignedException : public std::exception {

			public:

				NotSignedException();
				NotSignedException(NotSignedException const & src);
				virtual ~NotSignedException() throw();

				virtual const char* what() const throw();

		};


	private:

		const std::string	name;
		const int			signPerm;
		const int			exePerm;
		bool				withSign;


	protected:

		const std::string	target;

		virtual void	action() const = 0;

};

std::ostream & operator<<(std::ostream & os, const Form & form);

#endif
