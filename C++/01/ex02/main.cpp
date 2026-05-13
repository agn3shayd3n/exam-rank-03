/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-08 11:29:37 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-08 11:29:37 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain;
	brain = "HI THIS IS BRAIN.";

	std::string *stringPTR; // guarda direccion de brain
	stringPTR = &brain;

	std::string &stringREF = brain; // alias de brain

	std::cout << "memory address of str: " << &brain << "\n";
	std::cout << "memory address of stringPTR: " << stringPTR << "\n";
	std::cout << "memory address of strREF: " << &stringREF << "\n";

	std::cout << "\n";

	std::cout << "value of str: " << brain << "\n";
	std::cout << "value of stringPTR: " << *stringPTR << "\n";
	std::cout << "value of stringREF: " << stringREF << "\n";
}
