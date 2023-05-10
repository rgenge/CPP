/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:52:17 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/07 15:17:03 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange (BitcoinExchange const &cpy)
{
	*this = cpy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &cpy)
{
	if(this == &cpy)
		return *this;
	this->data = cpy.data;
	this->inputdata = cpy.inputdata;
	return *this;
}

void BitcoinExchange::readInput(std::string inputstr)
{
	std::ifstream input;
	input.open(inputstr.c_str());
	if (!input)
	{
		std::cerr << "Can't open input file"<< std::endl;
		input.close();
		return ;
	}
	std::string line;
	std::string date;
	std::string value;
	float val;
	while(std::getline(input,line))
	{
		date = line.substr(0,10);
		if(line.size() > 10)
			value = line.substr(12, 11);
		else
			value = "0";
		if (value[0])
			val = std::atof(value.c_str());
		calcResult(date, val);
	}
	input.close();
}

void BitcoinExchange::readData(std::string datastr)
{
	std::ifstream datacsv;
	datacsv.open(datastr.c_str());
	if (!datacsv)
	{
		std::cerr << "Can't open input file"<< std::endl;
		datacsv.close();
		exit(1);
	}
	std::string line;
	std::string date;
	std::string value;
	float val;
	while(std::getline(datacsv,line))
	{
		date = line.substr(0,10);
		if(line[0] == '2')
			value = line.substr(11, 10);
		else
			value = "0";
		if (value[0])
			val = std::atof(value.c_str());
		this->data.insert(std::pair<std::string,float>(date,val));
	}
	datacsv.close();
}

int BitcoinExchange::stringDate(std::string str_date)
{
	if (str_date.length() >= 10)
	{
		std::string str_year = str_date.substr(0, 4);
		std::string str_month = str_date.substr(5, 2);
		std::string str_day = str_date.substr(8, 2);
		int year = std::atoi(str_year.c_str());
		int month = std::atoi(str_month.c_str());
		int day = std::atoi(str_day.c_str());
		int int_date = year * 10000 + month * 100 + day;
		return int_date;
	}
	return 0;
}

int BitcoinExchange::dateCheck(std::string str_date)
{
	if (str_date.length() >= 10)
	{
		std::string str_year = str_date.substr(0, 4);
		std::string str_month = str_date.substr(5, 2);
		std::string str_day = str_date.substr(8, 2);
		int month = std::atoi(str_month.c_str());
		int day = std::atoi(str_day.c_str());
		if (day > 31 || month > 31)
			return (1);
	}
	return (0);
}
void BitcoinExchange::calcResult(std::string date, float val)
{
	int flag;
	{
		flag = 0;
		std::string saved_date = date;
		for (std::multimap<std::string, float> ::iterator it_data = this->data.begin(); it_data != this->data.end(); ++it_data)
		{
			if (it_data->first.compare(date) == 0 && it_data->first[4] == '-' && flag == 0)
			{
				if (val < 0)
					std::cout << "Error: Value Must be Positive" << std::endl;
				else if (val >= 2147483648)
					std::cout << "Error: Too large number" << std::endl;
				else
					std::cout << saved_date << " => " << val <<
					 " = " << it_data->second * val << std::endl;
				flag = 1;
			}
			else if (it_data->first[4] == '-' && date[4] == '-' &&
			stringDate(date) - stringDate(it_data->first) >= 1 &&
			stringDate(date) - stringDate(it_data->first) < 3 &&
			flag == 0 )
			{
				if (val < 0)
					std::cout << "Error: Value Must be Positive" << std::endl;
				else if (val > 2147483648)
					std::cout << "Error: Too large number" << std::endl;
				else
					std::cout << saved_date << " => " << val <<
					" = "  << it_data->second * val << std::endl;
				flag = 1;
			}
			else if (flag == 0 && (dateCheck(date) || date == "0" || (date[4] != '-' && date[5] != '|')))
			{
				std::cout << "Error bad input => " << date << std::endl;
				flag = 1;
			}
		}
	}
}

