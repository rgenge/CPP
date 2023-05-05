/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:07:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 13:14:51 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstring>

template <typename T>
Array<T>::Array() : array(NULL), size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	size = n;
	array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		array[i] = 0;
	std::cout << "Constructor called with size " << this->size << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	if(size)
	{
		delete[] this->array;
		std::cout << "Destructor called. " << std::endl;
	}
}

template<typename T>
Array<T>::Array(const Array<T> &cpy)
{
	std::cout << "Copy called" << std::endl;
	*this = cpy;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> &cpy)
{
	size = cpy.size;
	if (this->size > 0)
		delete [] this->array;
	array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		this->array[i] = cpy[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= size)
		throw std::exception();
	return array[index];
}
