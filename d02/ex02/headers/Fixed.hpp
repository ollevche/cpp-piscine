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
		void				incrementValue();
		void				decrementValue();

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
		Fixed &			operator=(Fixed const & src);
		bool			operator>(Fixed const & src) const;
		bool			operator<(Fixed const & src) const;
		bool			operator>=(Fixed const & src) const;
		bool			operator<=(Fixed const & src) const;
		bool			operator==(Fixed const & src) const;
		bool			operator!=(Fixed const & src) const;
		Fixed			operator+(Fixed const & src) const;
		Fixed			operator-(Fixed const & src) const;
		Fixed			operator*(Fixed const & src) const;
		Fixed			operator/(Fixed const & src) const;
		Fixed &			operator++();
		Fixed 			operator++(int);
		Fixed &			operator--();
		Fixed 			operator--(int);

		static Fixed const &	max(Fixed const & first, Fixed const & second);
		static Fixed const &	min(Fixed const & first, Fixed const & second);
};

#endif
