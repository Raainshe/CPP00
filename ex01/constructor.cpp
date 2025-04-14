/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:15:09 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/14 15:37:29 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::Contact(const std::string &firstName, const std::string &lastName,
		const std::string &nickName, const std::string &phoneNumber,
		const std::string &darkestSecret)
	: firstName(firstName), lastName(lastName), nickName(nickName),
		phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{
}

void PhoneBook::addContact(const Contact &newContact)
{
	if (count < 8)
	{
		contacts[count] = newContact;
		count++;
	}
	else
	{
		contacts[oldestIndex] = newContact;
		oldestIndex++;
		oldestIndex = (oldestIndex) % 8;
	}
}

int PhoneBook::getCount() const
{
	return (count);
}

void PhoneBook::getAllContacts() const
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < count; i++)
	{
		// Display each contact
		std::cout << "|" << std::setw(10) << i << "|";
		std::string fname = contacts[i].getFirstName();
		if (fname.length() > 10)
			fname = fname.substr(0, 9) + ".";
		std::cout << std::setw(10) << fname << "|";
		std::string lname = contacts[i].getLastName();
		if (lname.length() > 10)
			lname = lname.substr(0, 9) + ".";
		std::cout << std::setw(10) << lname << "|";
		std::string nick = contacts[i].getNickName();
		if (nick.length() > 10)
			nick = nick.substr(0, 9) + ".";
		std::cout << std::setw(10) << nick << "|\n";
	}
}

void PhoneBook::getContactByIndex(int i) const
{
	// Check if index is valid
	if (i < 0 || i >= count)
	{
		std::cout << "Error: Invalid index. Please enter a number between 0 and "
					<< (count - 1) << ".\n";
		return ;
	}
	std::cout << "|" << std::setw(10) << i << "|";

	std::string fname = contacts[i].getFirstName();
	if (fname.length() > 10)
		fname = fname.substr(0, 9) + ".";
	std::cout << std::setw(10) << fname << "|";

	std::string lname = contacts[i].getLastName();
	if (lname.length() > 10)
		lname = lname.substr(0, 9) + ".";
	std::cout << std::setw(10) << lname << "|";

	std::string nick = contacts[i].getNickName();
	if (nick.length() > 10)
		nick = nick.substr(0, 9) + ".";
	std::cout << std::setw(10) << nick << "|\n";
}

// Getter methods
std::string Contact::getFirstName() const
{
	return (firstName);
}

std::string Contact::getLastName() const
{
	return (lastName);
}

std::string Contact::getNickName() const
{
	return (nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (darkestSecret);
}

PhoneBook::PhoneBook()
{
	count = 0;
	oldestIndex = 0;
}