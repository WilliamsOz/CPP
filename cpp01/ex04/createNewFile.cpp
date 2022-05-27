/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNewFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:14:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 22:24:51 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	Sed::createNewFile(char *fileName, char *from, char *to)
{
	std::fstream	in_out_stream;
	std::size_t		found;
	std::string		input;
	std::string		*ptr_input = &input;

	in_out_stream.open(fileName, std::ios::in | std::ios::out);
	std::getline(in_out_stream, input);
	found = input.find_first_of(from, ft_strlen(to));
	while (found != std::string::npos)
	{
		ptr_input[found] = to;
		found = input.find_first_of(from, found+1);
	}
	return ;
}
