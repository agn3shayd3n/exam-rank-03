/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-08 10:09:16 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-08 10:09:16 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

// leaks --atExit -- ./zombieHorde 2>&1 | tail -5

class Zombie
{
	private:
	std::string	name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	void setName(std::string name);  

};

Zombie* zombieHorde( int N, std::string name );

#endif