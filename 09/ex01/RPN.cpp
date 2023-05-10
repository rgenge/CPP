/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:46:42 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 16:41:46 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN (RPN const &cpy)
{
	*this = cpy;
}

RPN &RPN::operator=(RPN const &cpy)
{
	if(this == &cpy)
		return *this;
	this->numbers = cpy.numbers;
	return *this;
}

void RPN::execute(char c)
{
	if (c == ' ')
		return ;
	int op1;
	int op2;
	if(numbers.size() > 1)
	{
		op2 = numbers.top();
		numbers.pop();
		op1 = numbers.top();
		numbers.pop();
		if (c == '+')
			numbers.push(op1 + op2);
		else if (c == '-')
			numbers.push(op1 - op2);
		else if (c == '*')
			numbers.push(op1 * op2);
		else if (c == '/')
			numbers.push(op1 / op2);
		else
			throw "Error :bad operator";
	}
	else
		throw "Error: invalid input";
}

void RPN::calc(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (isdigit(str[i]) && (isdigit(str[i + 1]) || str[i + 1] == '\0'))
			throw "Error:Envalid input";
		else if (str[i] == ' ' && str[i + 1] == '\0')
			throw "Error:Envalid input";
		else if (isdigit(str[i]))
			numbers.push(str[i] - '0');
		else
			execute(str[i]);
		i++;
		if (str[i] == 0)
			std::cout << numbers.top() << std::endl;
	}
}
