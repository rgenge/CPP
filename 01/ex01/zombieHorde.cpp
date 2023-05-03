/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:02:46 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 11:34:21 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{

	Zombie *horde = new Zombie[N];
	int	i;

	i = -1;
	while (++i < N)
		horde[i].set_name(name);
	return (horde);
}

