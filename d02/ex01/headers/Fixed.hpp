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
		int                 value;
		static const int    fractional = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int num);
		Fixed(const float num);

		Fixed &	operator=(Fixed const & src);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream &	operator<<(std::ostream & out, const Fixed & fixed);

#endif
