/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:28:35 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/06 21:32:15 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat &operator=(const Cat &cpy);
		~Cat();
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
