/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/02 22:23:05 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap Guy("Guy");
	ScavTrap Girl("Girl");

	for (int i = 0; i < 1 ; i++)
	{
		Girl.attack("Guy");
		Guy.takeDamage(20);
	}
	ScavTrap Spider("Spider");
	ScavTrap Ant("Ant");
	for (int i = 0; i < 6 ; i++)
	{
		Spider.attack("Ant");
		Ant.takeDamage(20);
		Ant.beRepaired(1);
	}
	Ant.guardGate();
}
