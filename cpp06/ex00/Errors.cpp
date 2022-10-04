/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 11:28:07 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

class Convert;

bool	isThereForbiddenCharacter( const char *src, int index )
{
	while (src[index])
	{
		if ((src[index] < 'a' || src[index] > 'z')
		&& (src[index] < '0' || src[index] > '9')
		&& (src[index] != '.') && (src[index] != '-'))
			return true;
		else
			index++;
	}
	return false;
}

bool	infNoSense(const std::string src, int index)
{
	std::string	floatCheck[3] = {"-inff", "+inff", "nanf"};
	std::string doubleCheck[3] = {"-inf", "+inf", "nan"};

	while (index < 3)
	{
		if (src.length() == floatCheck[index].length() && src.compare(floatCheck[index]) == 0)
			return false;
		else if (src.length() == doubleCheck[index].length() && src.compare(doubleCheck[index]) == 0)
			return false;
		index++;
	}
	return false;
}

bool	charNoSense(const std::string src, int index, int indicator)
{
	while (src[index])
	{
		if (src[index] >= 'a' && src[index] <= 'z')
			indicator += 1;
		index++;
	}
	if (indicator > 1)
		return true;
	return false;
}

bool	noSense(const char *src, int index, int dotIndicator, int minusIndicator)
{
	while (src[index])
	{
		if (src[index] == '.')
			dotIndicator++;
		if (src[index] == '-')
			minusIndicator++;
		if (index > 0 && src[index] == '-')
			return true;
		index++;
	}
	if (dotIndicator > 1 || minusIndicator > 1)
		return true;
	else if (charNoSense(static_cast<std::string>(src), 0, 0) == true)
		return true;
	else if (infNoSense(static_cast<std::string>(src), 0) == true)
		return true;
	return false;
}

bool	isOverflow(const char *src, int index, int count)
{
	Convert	c;

	while (src[index])
	{
		if (src[index] > '0' && src[index] < '9')
			count++;
		index++;
	}
	if (c.ft_stoi(src) > 2147483647 || c.ft_stoi(src) < -2147483648)
		return true;
	return false;
}

void	Convert::isThereAnError(int ac, const char *src) const
{
	if (ac != 2)
		throw	excp.invalidNumberOfArguments;
	else if (src == NULL || src[0] == '\0')
		throw	excp.emptyString;
	else if (isThereForbiddenCharacter(src, 0) == true)
		throw	excp.invalidCharacter;
	else if (noSense(src, 0, 0, 0) == true)
		throw	excp.noSense;
	else if (isOverflow(src, 0, 0) == true)
		throw	excp.overflow;
	return ;
}