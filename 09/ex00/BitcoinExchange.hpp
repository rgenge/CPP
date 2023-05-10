/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:51:41 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 00:11:40 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange
{
	private:
		std::multimap<std::string, float> data;
		std::multimap<std::string, float> inputdata;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange (BitcoinExchange const &cpy);
		BitcoinExchange &operator=(BitcoinExchange const &cpy);
		void readData(std::string datastr);
		void readInput(std::string inputstr);
		void calcResult(std::string date, float val);
		int stringDate(std::string str_date);
		int dateCheck(std::string str_date);
};

#endif
