/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:32 by acosta-a          #+#    #+#             */
/*   Updated: 2023/02/22 22:36:45 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("teste");
}
