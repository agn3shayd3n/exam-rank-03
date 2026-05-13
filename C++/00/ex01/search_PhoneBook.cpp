/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_PhoneBook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-06 21:26:25 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-06 21:26:25 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::findIndex(int index)
{
	std::cout << contact[index - 1].getFirstName() << "\n";
	std::cout << contact[index - 1].getLastName() << "\n";
	std::cout << contact[index - 1].getNickname() << "\n";
	std::cout << contact[index - 1].getPhone() << "\n";
	std::cout << contact[index - 1].getSecret() << "\n";
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string Contact::getFirstName() const
{
	return first_name;
}

std::string Contact::getLastName() const
{
	return last_name;
}

std::string Contact::getNickname() const
{
	return nickname;
}

std::string Contact::getPhone() const
{
	return phone_number;
}

std::string Contact::getSecret() const
{
	return darkest_secret;
}

void	PhoneBook::searchContacts()
{
	int	i;

	i = 0;
	while (i < counter && i < 8)
	{

		std::cout << std::setw(10) << std::right << i + 1<< "|";
		std::cout << std::setw(10) << std::right << truncate(contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact[i].getNickname()) << "|" << "\n";

		i++;
	}
}