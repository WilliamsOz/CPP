/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:16:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 18:57:14 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	Convert::isInt(const char *src, int index)
{
	while (src[index])
	{
		if (ft_isDigit(src[index]) == true || src[index] == '+' || src[index] == '-')
			index++;
		else
			return false;
	}
	return true;
}

bool	Convert::isFloat(const char *src, int index)
{
	bool	fIndicator = false;

	while (src[index])
	{
		if (src[index] == 'f')
			fIndicator = true;
		index++;
	}
	if (fIndicator == true)
		return true;
	return false;
}

bool	Convert::isDouble(const char *src, int index)
{
	bool	fIndicator = false;
	bool	dotIndicator = false;

	while (src[index])
	{
		if (src[index] == 'f')
			fIndicator = true;
		else if (src[index] == '.')
			dotIndicator = true;
		index++;
	}
	if (dotIndicator == true && fIndicator == false)
		return true;
	return false;
}

bool	Convert::isInfinityToConv( std::string const src )
{
	std::string const checkFloat[3] = {"-inff", "+inff", "nanf"};
	std::string const checkDouble[3] = {"-inf", "+inf", "nan"};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (src == checkFloat[i])
		{
			_isFloat = true;
			_isInfinityConv = true;
			return true;
		}
		else if (src == checkDouble[i])
		{
			_isDouble = true;
			_isInfinityConv = true;
			return true;
		}
	}
	return false;
}

void	Convert::detectCase(const char *src)
{
	std::string	stringSrc = static_cast<std::string>(src);

	if (isInfinityToConv(stringSrc) == true)
		return ;
	else if (stringSrc.length() == 1 && ft_isChar(*src))
		_isChar = true;
	else if (isInt(src, 0) == true)
		_isInt = true;
	else if (isFloat(src, 0) == true)
		_isFloat = true;
	else if (isDouble(src, 0) == true)
		_isDouble = true;
	return ;
}