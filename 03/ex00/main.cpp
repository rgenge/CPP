/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/02 19:15:48 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Guy("Guy");
	ClapTrap Girl("Girl");

	Girl = Guy;
	for (int i = 0; i < 11 ; i++)
		Girl.attack("Guy");
	Girl.attack("monster");
	Guy.takeDamage(9);
	Guy.takeDamage(0);
	Guy.beRepaired(3);
}
