// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 20:32:53 by ollevche          #+#    #+#             //
//   Updated: 2018/10/03 20:32:53 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	private:
		int                 fixed_val;
		static const int    fractional = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);

		Fixed &	operator=(Fixed const & src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif