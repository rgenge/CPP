/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:59 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/15 21:50:50 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	int		j;
	char	temp;

	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j])
				{
					temp = toupper(argv[i][j]);
					std::cout << temp;
				}
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
	return(0);
}
