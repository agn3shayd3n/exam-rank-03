/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-09 07:41:36 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-09 07:41:36 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream filename(av[1]);
		std::string s1 = av[2];
		std::string s2 = av[3];

		if (s1 == "")
		{
			std::cerr << "s1 cannot be empty" << "\n";
			return 1;
		}

		if (filename)
		{
			std::ofstream out(std::string(av[1]) + ".replace");
			if (!out)
				return 1;

			std::string line;
			while (std::getline(filename, line))
			{
				line = replaceText(line, s1, s2);
				out << line << "\n";
			}
		}
		else
		{
			std::cerr << "error opening file" << "\n";
			return 1;
		}
		filename.close();
	}
	if (ac != 4)    
  	{                                                                                
      std::cerr << "usage: ./sed filename s1 s2" << "\n";
      return 1;                                                                    
 	} 
}
