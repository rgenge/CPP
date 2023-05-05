/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 13:16:02 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T				*array;
		unsigned int	size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array<T> &cpy);
		Array<T>	&operator=(Array<T> &cpy);
		T &operator[](unsigned int index);

};
#include "Array.tpp"
#endif
