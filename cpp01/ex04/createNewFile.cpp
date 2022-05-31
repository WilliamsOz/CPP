/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNewFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:14:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/31 20:22:32 by wiozsert         ###   ########.fr       */
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

void	Sed::generateNewFile(char *fileName, char *old_str, char *new_str)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		replace = fileName;
	std::size_t		found;

	replace.append(".replace");
	ifs.open(fileName, std::ios::in | std::ios::app);
	ofs.open(replace.c_str(), std::ios::out | std::ios::trunc);
	replace.clear();
	while (1)
	{
		getline(ifs, replace);
		while (1)
		{
			found = replace.find(old_str);
			if (found == std::string::npos)
			{
				ofs << replace;
				break ;
			}
			ofs << replace.substr(0, found) << new_str;
			replace = replace.substr(found + strlen(old_str));
		}
		if (ifs.eof())
			break ;
		else
			ofs << std::endl;
	}
	return ;
}
