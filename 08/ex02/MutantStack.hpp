/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:01:20 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/20 15:07:18 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <algorithm>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack<T> &cpy);
		~MutantStack();
		MutantStack<T>& operator = (const MutantStack<T> &cpy);
		iterator begin();
		iterator end();

};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &cpy)
{
	*this = cpy;
}

template<typename T>
MutantStack<T> &MutantStack<T> :: operator= (const MutantStack<T> &cpy)
{
	if (this != cpy)
		*this = cpy;
	return *this;
}


#endif
