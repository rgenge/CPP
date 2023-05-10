/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:00:46 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 16:26:00 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <bits/stdc++.h>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe (PmergeMe const &cpy)
{
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &cpy)
{
	if(this == &cpy)
		return *this;
	this->deque = cpy.deque;
	this->vector = cpy.vector;
	return *this;
}

void PmergeMe::printVec()
{
	int i = 0;
	for (std::vector<int>::iterator it = vector.begin(); it < vector.end(); it
	++)
	{
		if (++i > 5)
		{
			std::cout << " [...]";
			break;
		}
		std::cout << " " << *it;
	}
	std::cout << std::endl;

}

void PmergeMe::printNumbers()
{
	for (std::deque<int>::iterator it = deque.begin(); it < deque.end(); it
	++)
	{
		std::cout << " " << *it;
	}

}

void PmergeMe::isNum(char *input)
{
	std::string s = input;
	long long int	converted;

	converted = atol(s.c_str());
	if(s.find_first_not_of("0123456789") != std::string::npos)
		throw "Error, type positive numbers only";
	if(converted > 2147483647 )
		throw "Error, type integer number";
}

void PmergeMe::init(char** input)
{
	int	num;

	clock_t startdata = clock ();
	for (int i = 1; input[i]; i++)
	{
		isNum(input[i]);
		num = atol(input[i]);
		vector.push_back(num);
	}
	clock_t enddata = clock ();
	clock_t startdata2 = clock ();
	for (int i = 1; input[i]; i++)
	{
		isNum(input[i]);
		num = atol(input[i]);
		deque.push_back(num);
	}
	clock_t enddata2 = clock ();
	double vectordatatime = double ((enddata - startdata));
	double dequedatatime = double ((enddata2 - startdata2));
	std::cout << "Before:";
	printVec();
	sortVecDeq(vectordatatime, dequedatatime);
}

void PmergeMe::sortVecDeq(double vectordatatime, double dequedatatime)
{
	clock_t start = clock ();
	mergeSort(vector);
	clock_t end = clock ();
	double time = double ((end - start)) + vectordatatime;
	std::cout << "AFter: ";
	printVec();
	clock_t start2 = clock ();
	mergeSort(deque);
	clock_t end2 = clock ();
	double time2 = double ((end2 - start2)) + dequedatatime;
	std::cout << "Time to process a range of " << vector.size() <<" elements with std::vector: " << time << " ms" << std::endl;;
	std::cout << "Time to process a range of " << deque.size() <<" elements with std::deque: " << time2 << " ms" << std::endl;;
}



