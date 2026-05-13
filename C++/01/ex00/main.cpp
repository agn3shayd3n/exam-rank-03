/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-07 21:44:31 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-07 21:44:31 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *z = newZombie("heap zombie (っ´ཀ`)っ");
	z->announce();
	delete z;

	randomChump("stack zombie (っ҂ཀ•)っ");

	return (0);
}