/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/05/03 11:39:17 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

void	replace(std::string input, std::string str1, std::string str2)
{
	int					i, j, save;
	std::string			readfile, output, temp;
	std::stringstream	buffer;

	output = input + ".replace";
	std::ifstream filein(input.c_str());
	if (!filein.is_open())
	{
		std::cout << "Cannot open the file or it doesn't exist" << std::endl;
		exit(1);
	}
	std::ofstream fileout(output.c_str());
	buffer << filein.rdbuf();
	readfile = buffer.str();
	i = 0;
	while (readfile[i])
	{
		j = 0;
		if (readfile[i] == str1[j])
		{
			save = i;
			while (str1[j] && readfile[i] == str1[j])
			{
				i++;
				j++;
			}
			if (str1[j] == '\0')
				temp.append(str2);
			else
				i = save;
		}
		temp.push_back(readfile[i]);
		i++;
	}
	fileout << temp;
}

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Type 4 arguments" << std::endl;
		return (1);
	}
	else
		replace(argv[1], argv[2], argv[3]);
	return(0);
}
