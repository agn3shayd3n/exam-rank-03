/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-08 15:48:53 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-08 15:48:53 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{ // las referencias deben inicializarse en el momento de la construccion
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
