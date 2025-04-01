/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:45 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/01 17:59:32 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
	int	command_id;

	std::string command;
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH, or EXIT\n";
		std::cin >> command;
		command_id = valid_command(command);
		if (command_id == -1)
		{
			std::cout << "ïnvalid command entered\n";
			continue ;
		}
		else if (command_id == 1)
			add_contact();
		else if (command_id == 2)
			get_all_contacts();
		else if (command_id == 3)
		{
			std::cout << "Exiting Program\n";
			break ;
		}
		else
			continue ;
	}
	return (0);
}
