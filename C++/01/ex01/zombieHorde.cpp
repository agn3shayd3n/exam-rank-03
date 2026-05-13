/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-08 10:10:01 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-08 10:10:01 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie *horde = new Zombie[N];
	while (i < N)
	{
		std::ostringstream ss; // como std::cout pero lo guarda internamente, buff vacio
		ss << name << " #" << i; // texto + num convertido en str automáticamente
		horde[i].setName(ss.str()); // objeto ss con método str, soltar lo guardado en ss
		i++;
	}
	return (horde);
}