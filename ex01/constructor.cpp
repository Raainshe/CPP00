/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:15:09 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/04 16:19:24 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
		contacts[oldsetIndex] = newContact;
		oldestIndex = (oldestIndex + 1) % 8;
	}
}