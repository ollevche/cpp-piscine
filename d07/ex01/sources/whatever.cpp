// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:53:25 by ollevche          #+#    #+#             //
//   Updated: 2018/10/11 13:53:25 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <class T>
void iter(T * arr, int len, void (*func)(T)) {
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

template <class T>
void print(T elem) {
	std::cout << elem << std::endl;
}

int main() {
	float	arr[3] = {1.10f, 2.20f, 3.30f};
	int		arr1[3] = {10, 20, 30};

	iter(arr, 3, &print);
	iter(arr1, 3, &print);
}
