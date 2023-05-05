/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/04 14:28:18 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : size(size - 1)
{

}

Span::~Span()
{

}

Span::Span (Span const &cpy)
{
	*this = cpy;
}
Span &Span::operator=(Span const &cpy)
{
	if(this == &cpy)
		return *this;
	this->N = cpy.N;
	this->size = cpy.size;
	return *this;
}

void Span::addNumber(unsigned int number)
{
	if(N.size() > size)
		throw Span::SpanException();
	N.push_back(number);
}

void Span::fillNumber(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end)
{
	srand((unsigned) time(NULL));
	if(end == begin)
		throw Span::SpanException();
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}

}

unsigned int Span::shortestSpan()
{
	if ( N.size() < 2)
		throw Span::SpanException();
	unsigned int shortest = 1000000000;
	std::sort(N.begin(), N.end());
	for(unsigned int i = 0; i < N.size() - 2; i++)
	{
		if ((N[i + 1] - N[i]) < shortest)
			shortest = N[i + 1] - N[i];
	}
	return shortest;

}

unsigned int Span::longestSpan()
{
	if (N.size() < 2)
		throw Span::SpanException();
	unsigned int max;
	unsigned int min;

	max = *max_element(N.begin(), N.end());
	min = *min_element(N.begin(), N.end());
	return (max - min);
}
