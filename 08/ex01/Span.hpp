/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:01:20 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/04 14:15:03 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int size;
		std::vector<unsigned int> N;
	public:
		Span(unsigned int size);
		~Span();
		Span(Span const &cpy);
		Span &operator=(Span const &cpy);
		class SpanException : public std::exception {
			public :
				const char * what() const throw() { return "Invalid Input"; }
		};
		void addNumber(unsigned int num);
		void fillNumber(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif
