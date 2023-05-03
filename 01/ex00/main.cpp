/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/19 10:50:09 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombieHeap = newZombie("Lucas Heap");
	newZombieHeap->announce();
	randomChump("Klayton Stack");

	delete newZombieHeap;
}
