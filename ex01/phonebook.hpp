/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:22:42 by rmakoni           #+#    #+#             */
/*   Updated: 2025/03/31 16:32:46 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;

  public:
	// Constructor
	Contact();

	// Setter methods
	void setFirstName(const std::string &name);
	void setLastName(const std::string &name);
	void setPhoneNumber(const std::string &number);

	// Getter methods
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getPhoneNumber() const;
};