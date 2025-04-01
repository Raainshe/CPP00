/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:45 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/01 16:20:27 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

int	valid_command(std::string command)
{
	if (command == "ADD")
		return (1);
	else if (command == "SEARCH")
		return (2);
	else if (command == "EXIT")
		return (3);
	return (-1);
}
int	main(int argc, char **argv)
{
	std::string command;
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH, or EXIT\n";
		std::cin >> command;
		if (valid_command(command))
	}
}
