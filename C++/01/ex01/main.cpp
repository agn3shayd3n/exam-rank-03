/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-08 10:09:47 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-08 10:09:47 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde = zombieHorde(20, "(っ҂° ཀ•)っ⊹");
	int i = 0;
	while (i < 20)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;

	return 0;
}
