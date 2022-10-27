/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:46:12 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 19:03:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	ft_isChar( char c )
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

bool	ft_isDigit( char c )
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

bool	isInfinityConversion( std::string const src )
{
	std::string const checkFloat[3] = {"-inff", "+inff", "nanf"};
	std::string const checkDouble[3] = {"-inf", "+inf", "nan"};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (src == checkFloat[i] || src == checkDouble[i])
			return true;
		else
			i++;
	}
	return false;
}

void	initList( error_t *ptr_list )
{
	ptr_list->isThereChar = 0;
	ptr_list->isThereDigit = 0;
	ptr_list->isThereDot = 0;
	ptr_list->isThereF = 0;
	ptr_list->isThereSign = 0;
	return ;
}

size_t	ft_strlen(const char *src)
{
	size_t index = 0;

	if (src == NULL)
		return index;
	while (src[index])
		index++;
	return index;
}
