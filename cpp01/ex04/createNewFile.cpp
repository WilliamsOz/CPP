/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNewFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:14:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/29 12:50:04 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	Sed::createNewFile(char *fileName, char *from, char *to)
{
	std::fstream	old_file;
	std::fstream	new_file;
	std::string		replace = fileName;

	replace.append(".replace");
	new_file.open(replace.c_str(), std::ios::in | std::ios::out | std::ios::app);
	while (std::getline(new_file, replace))
	{
		
	}
	while
	return ;
}
