// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 14:27:12 by ollevche          #+#    #+#             //
//   Updated: 2018/10/08 14:27:12 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "general.hpp"

class Bureaucrat {

	public:

		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;

		void			upgrade();
		void			downgrade();
		void			setGrade(int num);
		void			signForm(Form & form);
		static void		confirmGrade(int num);

		Bureaucrat &	operator=(Bureaucrat const & src);

		class GradeTooHighException : public std::exception {

			public:

				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const & src);
				virtual ~GradeTooHighException() throw();

				virtual const char* what() const throw();

		};

		class GradeTooLowException : public std::exception {

			public:

				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const & src);
				virtual ~GradeTooLowException() throw();

				virtual const char* what() const throw();

		};


	private:

		const std::string	name;
		int					grade;

};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bur);

#endif
