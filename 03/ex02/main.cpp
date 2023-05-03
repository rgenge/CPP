/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/29 07:46:54 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap Spider("Spider");
	FragTrap Ant("Ant");
	for (int i = 0; i < 6 ; i++)
	{
		Spider.attack("Ant");
		Ant.takeDamage(20);
		Ant.beRepaired(1);
	}
	Ant.highFivesGuys();
}
