/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:16:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 11:01:59 by wiozsert         ###   ########.fr       */
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

void	Convert::detectCase(const char *src)
{
	std::string	stringSrc = static_cast<std::string>(src);

	if (isInfinityConversion(stringSrc) == true)
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