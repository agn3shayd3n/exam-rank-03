/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-12 07:35:00 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-12 07:35:00 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceText(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return (line);
}

// != es que si ha encontrado
// posicion 0 + copiar s2 + todo el resto
// avanzamos para la siguiente ocurrencia desde despues del reemplazo
// sin segundo argumento substr copia hasta el final del string (!)