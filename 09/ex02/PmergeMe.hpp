/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:00:49 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 16:26:10 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <cstdlib>
#include <algorithm>

class PmergeMe
{
	private:
		std::deque<int> deque;
		std::vector<int> vector;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe (PmergeMe const &cpy);
		PmergeMe &operator=(PmergeMe const &cpy);
		void init(char** input);
		void isNum(char* input);
		void printVec();
		void printNumbers();
		void sortVecDeq(double vectordatatime, double dequedatatime);
		void mergeSort();

		template < typename T >
		void insertSort(T & input)
		{
			int size = input.size();

			int i = -1;
			while (++i < size)
			{
				int j = i;
				while (j < size && input[j] >= input[i])
					j++;
				if (j < size)
				{
					int tmp = input[j];
					input.erase(input.begin() + j);
					input.insert(input.begin() + i, tmp);
					i = -1;
				}
			}
		}

		template < typename T >
		void mergeSort(T & input)
		{
			if (input.size() > 5)
			{
				std::vector<unsigned int> first(input.begin(), input.begin() + ((input.size() + 1) / 2));
				std::vector<unsigned int> second(input.begin() + ((input.size() + 1) / 2), input.end());
				mergeSort(first);
				mergeSort(second);
				std::merge(first.begin(), first.end(), second.begin(), second.end(), input.begin());
			}
			else
				insertSort(input);
		}

};

#endif
