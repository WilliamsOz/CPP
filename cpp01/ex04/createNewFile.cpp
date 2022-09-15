/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNewFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:14:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/15 10:46:55 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	strlen(char *str)
{
	int i=0;
	while (str[i])
		i++;
	return (i);
}

void	Sed::createNewFile(char *fileName, char *old_str, char *new_str)
{
	std::ifstream	inputFileStream;
	std::ofstream	outputFileStream;
	std::string		replace = fileName;
	std::size_t		found;

	replace.append(".replace");
	//on ajoute .replace a la string replace qui est initialisé avec le nom du fichier
	inputFileStream.open(fileName, std::ios::in);
	//ouverture du flux d'entrée
	outputFileStream.open(replace.c_str(), std::ios::out | std::ios::trunc);
	//ouverture du flux de sortie
	replace.clear();
	//nettoyage de la string replace
	while (1)
	{
		getline(inputFileStream, replace);
		//on récupère la string dans le fichier
		while (1)
		{
			found = replace.find(old_str);
			//retourne la position de l'occurence de la string
			if (found == std::string::npos)
			//si le '\n' est trouver
			{
				outputFileStream << replace;
				//on envoit la chaine replace a l'intérieur du flux de sortie
				break ;
			}
			else
			{
				outputFileStream << replace.substr(0, found) << new_str;
				//on envoit la chaine replace a l'interieur du ofs a jusqu au premier caractere de l'occurence,
				//puis on envoit la chaine qui doit remplacer l'occurence
				replace = replace.substr(found + strlen(old_str));
				//on cree une nouvelle sous-chaine a partir de la fin de l'occurence.
			}
		}
		if (inputFileStream.eof()) //si la fin de fichier est atteinte
			break ;
		else
			outputFileStream << std::endl; //on ajoute le '\n' a l'interieur du ofs
	}
	return ;
}
