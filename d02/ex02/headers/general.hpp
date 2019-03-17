// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 20:33:49 by ollevche          #+#    #+#             //
//   Updated: 2018/10/03 20:33:49 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GENERAL_HPP
# define GENERAL_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

Fixed & max(Fixed & first, Fixed & second);
Fixed & min(Fixed & first, Fixed & second);

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);

#endif
