/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:16:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/07 09:58:04 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	Convert::isInt(const char *src, int index)
{
	while (src[index])
	{
		if (isdigit(src[index]) == true || src[index] == '+' || src[index] == '-')
			index++;
		else
			return false;
	}
	return true;
}

bool	Convert::isFloat(const char *src, int index)
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
	if (fIndicator == true && dotIndicator == true)
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

bool	Convert::isImpossibleConversion( std::string const src )
{
	std::string const checkFloat[3] = {"-inff", "+inff", "nanf"};
	std::string const checkDouble[3] = {"-inf", "+inf", "nan"};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (src == checkFloat[i])
		{
			_isFloat = true;
			_impossibleConversion = true;
			return true;
		}
		else if (src == checkDouble[i])
		{
			_isDouble = true;
			_impossibleConversion = true;
			return true;
		}
	}
	return false;
}

void	Convert::detectCase(const char *src)
{
	std::string	stringSrc = static_cast<std::string>(src);

	if (isImpossibleConversion(stringSrc) == true)
		return ;
	else if (stringSrc.length() == 1 && isalpha(*src))
		_isChar = true;
	else if (isInt(src, 0) == true)
		_isInt = true;
	else if (isFloat(src, 0) == true)
		_isFloat = true;
	else if (isDouble(src, 0) == true)
		_isDouble = true;
	return ;
}