/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:53:48 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/10 14:12:17 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB (std::string name) : name(name)
{
	std::cout << "HumanB :" << name << " constructor" << std::endl;
}
HumanB::~HumanB (void)
{
	std::cout << "HumanB :" << this->name << " destructor" << std::endl;
}
void HumanB::attack(void)
{
	std::cout << this->name << " atacks with their " << this->weapon->getType()
		<< std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
