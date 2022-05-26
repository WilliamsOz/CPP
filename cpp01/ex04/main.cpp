/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:35 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 12:38:13 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//av[1] = a filename and
//av[2] && av[3] = two strings, s1 and s2
//on ouvre filename, puis :
// on copie son contenu dans un nouveau fichier : "filename.replace" en remplacer s1 par s2
//std::string.replace est interdit, les fonction de manipulation en c aussi
//gerer les erreurs des flux (fichier sans permssions, inexistant ...)
//faire son propre main de test pour verifier
int main(int ac, char **av)
{
	Sed	sed;
	std::string av1 = av[2];
	std::string av2 = av[3];

	if (ac != 4)
		std::cerr << "Error" << std::endl << "Enter only 3 arguments" << std::endl;
	else
	{
		if (sed.validArguments(av[1]) == false)
			return (1);
		else if (av1 == av2)
			return (0);
		else
			std::cout << "Coucou bg" << std::endl;
	}

	return (0);
}