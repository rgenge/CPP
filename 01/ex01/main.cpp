/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 11:41:58 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	hordesize, i;

	hordesize = 5;
	i = -1;
	Zombie *horde = zombieHorde(hordesize, "Horde");
		while(++i < hordesize)
			horde[i].announce();
		delete [] horde;


}
