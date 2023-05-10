/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:46:42 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 00:16:38 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>

class RPN
{
	private:
		std::stack<int> numbers;
	public:
		RPN();
		~RPN();
		RPN (RPN const &cpy);
		RPN &operator=(RPN const &cpy);
		void calc(char *str);
		void execute(char c);
};
#endif
