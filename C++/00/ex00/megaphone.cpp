/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-04 10:20:51 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-04 10:20:51 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int argc, char **av)
{
	if (argc > 1)
	{
		int arg_count = 1;
		while (arg_count < argc)
		{
			std::string text = av[arg_count];
			int i = 0;
			int len = text.length();
			while (i < len)
			{
				text[i] = toupper((unsigned char)text[i]);
				i++;
			}
			
			std::cout << text;
			arg_count++;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
}
