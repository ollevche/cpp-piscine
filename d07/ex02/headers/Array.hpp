// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 14:17:31 by ollevche          #+#    #+#             //
//   Updated: 2018/10/11 14:17:32 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {

	public:

		Array() : size(0), arr(new T[size]){
			initArr();
		}

		Array(unsigned int size) : size(size), arr(new T[size]) {
			initArr();
		}

		Array(Array const & src) : size(src.size) {
			*this = src;
		}

		~Array() {
			delete [] arr;
		}

		T & operator[](const unsigned int i) const {
			if (i < 0 || i >= size)
				throw std::out_of_range("Array index is out of bounds");
			return arr[i];
		}

		Array & operator=(Array const & src) {
			size = src.size;
			delete [] arr;
			arr = new T[size];
			for (unsigned int i = 0; i < size; i++)
				arr[i] = src.arr[i];
			return *this;
		}


	private:

		unsigned int	size;
		T				*arr;

		void initArr() {
			for (unsigned int i = 0; i < size; i++)
				arr[i] = 0;
		}

};

#endif
