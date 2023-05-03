/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:53:48 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 11:36:44 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA (std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA :" << name << " constructor with ";
	std::cout << this->weapon.getType() << std::endl;
}
HumanA::~HumanA (void)
{
	std::cout << "HumanA :" << this->name << " destructor" << std::endl;
}
void HumanA::attack(void)
{
	std::cout << this->name << " atacks with their " << this->weapon.getType()
		<< std::endl;
}
