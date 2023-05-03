/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:04:31 by acosta-a          #+#    #+#             */
/*   Updated: 2023/03/06 22:47:00 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}
Brain::Brain(const Brain &cpy)
{
	*this = cpy;
	std::cout << "Brain Copy Constructor Called" << std::endl;
}
Brain &Brain::operator=(const Brain &cpy)
{
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = cpy.ideas[i];
	return *this;
}
std::string const &Brain ::printIdea(int const &index) const
{
	if (index < 100 && index >= 0)
		return (this->ideas[index]);
	return (this->ideas[0]);
}
void Brain ::saveIdea(std::string const &idea, int const &index)
{
	if (index < 100 && index >= 0)
		this->ideas[index] = idea;
}
