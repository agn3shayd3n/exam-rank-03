/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-04 11:05:05 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-04 11:05:05 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact // caja fuerte
{
	// setter - ranura donde metes algo dentro de la caja / main > setter > data
	// getter - ventana donde lees lo que hay / main < getter < data
	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
	
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhone() const;
	std::string getSecret() const;

	void 		setFirstName(std::string name);
	void 		setLastName(std::string last_name);
	void 		setNickname(std::string nick);
	void 		setPhoneNumber(std::string phone);
	void 		setSecret(std::string secret);
};

class PhoneBook
{
	private: //atributos

	Contact contact[8];
	int		counter;

	public: //metodos

	PhoneBook();
	void	searchContacts();
	void	findIndex(int index);
	int		getCounter() const;
	void	addContact (Contact newContact);
};

#endif