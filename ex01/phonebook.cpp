/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:45 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/08 22:28:05 by rmakoni          ###   ########.fr       */
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

void ContactDetails(PhoneBook &NewPhonebook)
{
	std::string sname, ssurname, snick, sphone, ssecret;
	std::cout << "Enter your First Name: ";
		std::cin >> sname;
		std::cout << "Enter your Last Name: ";
		std::cin >> ssurname;
		std::cout << "Enter your Nickname: ";
		std::cin >> snick;
		std::cout << "Enter your Phone Number: ";
		std::cin >> sphone;
		std::cout << "Enter your secret: ";
		std::cin >> ssecret;
		if (sname.empty() || ssurname.empty() || snick.empty() || sphone.empty()
			|| ssecret.empty())
		{
			std::cout << "The data you entered was not complete. Please try again :)";
		}
		else
		{
			Contact newContact(sname, ssurname, snick, sphone, ssecret);
			NewPhonebook.addContact(newContact);
			std::cout << "Contact added successfully!\n";
		}
}

void	CreateContact(PhoneBook &NewPhonebook)
{
	
	while (NewPhonebook.getCount() < 8 )
	{
		ContactDetails(NewPhonebook);
	}
	if(NewPhonebook.getCount() == 8)
		ContactDetails(NewPhonebook);
	
}

void	GetAllContacts(PhoneBook &phonebook)
{
	int	i;

	phonebook.getAllContacts();
	std::cout << "Whcih index would you like to display: ";
	std::cin >> i;
	phonebook.getContactByIndex(i);
}

int	main(void)
{
	int			command_id;
	PhoneBook	PhoneBooks;

	PhoneBooks = PhoneBook();
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
			CreateContact(PhoneBooks);
		else if (command_id == 2)
			GetAllContacts(PhoneBooks);
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
