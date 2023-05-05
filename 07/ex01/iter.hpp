/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/28 08:53:18 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, int length, void(*func)(T& array))
{
	for(int i = 0; i < length; i++)
	{
		std::cout << "iter" << i  << " : ";
		func(array[i]);
	}
}

template <typename T>
void print (T& input)
{
	std::cout << input << std::endl;
}
#endif
