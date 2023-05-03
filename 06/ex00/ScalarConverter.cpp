/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:48:29 by acosta-a          #+#    #+#             */
/*   Updated: 2023/04/24 16:58:34 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter () {}

ScalarConverter::~ScalarConverter () {}

int ScalarConverter::checkDigit(const std::string input)
{
	int n = input.length();
	int flag = 0;

	for(int i = 0; i < n - 1; i++)
	{
		if (((input[i] >= '0' && input[i] <= '9') || input[i] == '.' || input[i] == '-' || input[i] == '+') && (input[n - 1] == 'f'  || isdigit(input[n - 1])))
			flag = 0;
		else
			return 1;
	}
	return flag;
}

void ScalarConverter::convert(const std::string input)
{
	char	charInput = toChar(input);
	int		intInput = toInt(input);
	float	floatInput = toFloat(input);
	float	doubleInput = toDouble(input);

	if (input != "nanf" && input != "nan" && input != "+inff"  && input != "-inff"  && input != "+inf" && input != "-inf" && checkDigit(input) && input.length() > 1)
	{
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	if((isprint(input[0]) && ((input[1] && !isdigit(input[1])) || (!input[1] && !isdigit(input[0])))) && input != "nanf" && input != "nan"
		&& input != "+inff"  && input != "-inff"  && input != "+inf"
			&& input != "-inf" && input[0] != '-' && input[1] != '.')
	{
		floatInput = static_cast<float>(input.c_str()[0]);
		charInput = static_cast<char>(floatInput);

	}
	if((isprint(input[0]) && ((input[1] && !isdigit(input[1])) || (!input[1] && !isdigit(input[0])))) && input != "nanf" && input != "nan"
	&& input != "+inff"  && input != "-inff"  && input != "+inf"
		&& input != "-inf" && input[0] != '-' && input[1] != '.')
		doubleInput = static_cast<double>(input.c_str()[0]);
	if((isprint(input[0]) && ((input[1] && !isdigit(input[1])) || (!input[1] && !isdigit(input[0])))) && input != "nanf" && input != "nan"
	&& input != "+inff"  && input != "-inff"  && input != "+inf"
	&& input != "-inf" && input[0] != '-' && input[1] != '.')
		intInput = static_cast<int>(input.c_str()[0]);
	if ((((floatInput > 127 || floatInput < 27)&& (isdigit(input[1]) || !input[1] || input[1] == '.')) || (input == "0.0" || input == "0.0f")))
		std::cout << "char: Non displayable" << std::endl;
	else if (std::isnan(floatInput) || std::isinf(floatInput))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << charInput << std::endl;
	if ((intInput == 0 && floatInput != 0) || std::isnan(floatInput))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << intInput << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	if ((floatInput - intInput > 0 || std::isnan(floatInput) || input == "-inff"
		|| input == "-inf" || (floatInput - intInput < 0)) && (input[1] != '.' || input[2] != '.'))
	{
		std::cout << "float: " << floatInput << "f" << std::endl;
		std::cout << "double: " << doubleInput << std::endl;
	}
	else
	{
		std::cout << std::setprecision(0) << std::fixed;
		std::cout << "float: " << floatInput << ".0f" << std::endl;
		std::cout << "double: " << doubleInput << ".0" << std::endl;
	}
}
char ScalarConverter::toChar(const std::string input)
{
	char c = static_cast<char>(strtol(input.c_str(), NULL, 10));
	return (c);
}
int ScalarConverter::toInt(const std::string input)
{
	long long i;

	i = atol(input.c_str());
	if (i > INT_MAX || i < INT_MIN)
		return (0);
	if(isalpha(input[0]) && input != "nanf" && input != "nan"
		&& input != "+inff"  && input != "-inff"  && input != "+inf"
			&& input != "-inf" && input[0] != '-')
		return (static_cast<int>(input.c_str()[0]));
	else
		return (static_cast<int>(strtol(input.c_str(), NULL, 10)));
}
float ScalarConverter::toFloat(const std::string input)
{
	if(isalpha(input[0]) && input != "nanf" && input != "nan"
		&& input != "+inff"  && input != "-inff"  && input != "+inf"
			&& input != "-inf" && input[0] != '-')
		return (static_cast<float>(input.c_str()[0]));
	else
		return (static_cast<float>(atof(input.c_str())));
}
double ScalarConverter::toDouble(const std::string input)
{
	if(isalpha(input[0]) && input != "nanf" && input != "nan"
		&& input != "+inff"  && input != "-inff"  && input != "+inf"
			&& input != "-inf" && input[0] != '-')
		return (static_cast<double>(input.c_str()[0]));
	else
		return (static_cast<double>(toFloat(input)));
}

