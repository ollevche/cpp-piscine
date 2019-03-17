// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 14:17:20 by ollevche          #+#    #+#             //
//   Updated: 2018/10/12 14:17:20 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span {

	public:

		Span(unsigned int capacity);
		Span(Span const & src);
		~Span();
		Span & operator=(Span const & src);

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();


	private:

		Span();

		unsigned int		capacity;
		std::vector<int>	array;
		bool				sorted;
		int					shortest;
		int					longest;

};

#endif
