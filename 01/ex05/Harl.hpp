/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:12:52 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/22 22:36:33 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
	private:
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};
#endif
