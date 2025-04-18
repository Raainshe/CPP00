/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:42 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/08 12:37:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>

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
			const std::string &nickName, const std::string &phoneNumber,
			const std::string &darkestSecret);

	// Getter methods
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

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
	void getContactByIndex(int i) const;
	int getCount() const;
};

#endif