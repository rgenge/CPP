/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:53:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 11:37:27 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};
