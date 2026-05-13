/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_PhoneBook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-06 21:25:41 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-06 21:25:41 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"


void Contact::setFirstName(std::string name)
{
	first_name = name;
}

void Contact::setLastName(std::string last)
{
	last_name = last;
}

void Contact::setNickname(std::string nick)
{
	nickname = nick;
}

void Contact::setPhoneNumber(std::string phone)
{
	phone_number = phone;
}

void Contact::setSecret(std::string secret)
{
	darkest_secret = secret;
}
