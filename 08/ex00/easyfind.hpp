/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:09:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/04 14:38:42 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>

int easyfind(T &container, int value)
{
	std::vector<int>::iterator it;
	it = std::find(container.begin(),container.end(), value);
	if (it != container.end())
		return value;
	throw("Index value out of bound");
	return (-1);
}

#endif
