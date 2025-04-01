/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:42 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/01 17:21:20 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class PhoneBook
{
  private:
	Contact contacts[8];
	int count;
	int oldestIndex;

  public:
	PhoneBook();

	void addContact(const Contact &newContact);
	void getAllContacts() const;
	int getCount() const;
};

PhoneBook::PhoneBook()
{
	count = 0;
	oldestIndex = 0;
}

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	// Constructor
	Contact();
	Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickName, const std::string &darkestSecret);

	// Getter methods
	std::string getContact() const;
};