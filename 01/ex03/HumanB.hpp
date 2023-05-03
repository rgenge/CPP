/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:53:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/20 15:46:43 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon);
};
