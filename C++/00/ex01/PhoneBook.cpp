/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-04 11:23:40 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-04 11:23:40 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::getCounter() const
{
	return counter;
}

PhoneBook::PhoneBook() // constructor
{
	counter = 0;
}
void PhoneBook::addContact(Contact newContact)
{
	contact[counter % 8] = newContact;
    counter++;
}

bool	readField(std::string &field)
{
	if (std::cin >> field)
		return (1);
	else
	{
		std::cout << "EOF detected, exiting..." << "\n";
		return (0);
	}
}

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::string choice;
		std::cout << "Enter one of three commands: ADD, SEARCH, EXIT" << "\n";
		if (std::cin >> choice)
		{
			if (choice == "ADD" || choice == "add")
			{
				Contact newContact;

				std::cout << "Please, input information for new contact." << "\n";
				std::cout << "first name: " << "\n";

				std::string name;
				if (readField(name))
					newContact.setFirstName(name);
				else
					break;

				std::cout << "last name: " << "\n";
				std::string last;
				if (readField(last))
					newContact.setLastName(last);
				else
					break;

				std::cout << "nickname: " << "\n";
				std::string nick;
				if (readField(nick))
					newContact.setNickname(nick);
				else
					break;

				std::cout << "phone number: " << "\n";
				std::string phone;
				if (readField(phone))
					newContact.setPhoneNumber(phone);
				else
					break;

				std::cout << "and darkest secret...(˵¬ᴗ¬˵): " << "\n";
				std::string secret;
				if (readField(secret))
					newContact.setSecret(secret);
				else
					break;					

				phonebook.addContact(newContact);
			}
			else if (choice == "SEARCH" || choice == "search")
			{
				phonebook.searchContacts();
				std::cout << "specify the index to display: ";
				std::string input;
				std::cin >> input;
				std::istringstream ss(input);
				int index;
				ss >> index;
				if (index < 1 || index > 8 || index > phonebook.getCounter())
					std::cout << "index out of range." << "\n";
				else
					phonebook.findIndex(index);

			}
			else if (choice == "EXIT" || choice == "exit")
			{
				std::cout << "goodbye!" << "\n";
				break;
			}
		}
		else
			return (-1);
	}
}