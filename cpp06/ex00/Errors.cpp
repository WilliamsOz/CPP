/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/07 10:04:28 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

class Convert;

bool	isThereForbiddenCharacter( const char *src, int index )
{
	while (src[index])
	{
		if ((isalpha(src[index]) == false)
		&& (src[index] < '0' || src[index] > '9')
		&& (src[index] != '.')
		&& (src[index] != '-')
		&& (src[index] != '+'))
			return true;
		else
			index++;
	}
	return false;
}

bool	infFound(const std::string src, int index)
{
	std::string	floatCheck[3] = {"-inff", "+inff", "nanf"};
	std::string doubleCheck[3] = {"-inf", "+inf", "nan"};

	while (index < 3)
	{
		if (src.length() == floatCheck[index].length() && src.compare(floatCheck[index]) == 0)
			return true;
		else if (src.length() == doubleCheck[index].length() && src.compare(doubleCheck[index]) == 0)
			return true;
		index++;
	}
	return false;
}

static bool	isInf( std::string const src )
{
	std::string const checkFloat[3] = {"-inff", "+inff", "nanf"};
	std::string const checkDouble[3] = {"-inf", "+inf", "nan"};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (src == checkFloat[i])
			return true;
		else if (src == checkDouble[i])
			return true;
	}
	return false;
}

bool	charNoSense(std::string const src, int index, int indicator)
{
	bool	signIndicator = false;

	while (src[index])
	{
		if (src[index] == '-' || src[index] == '+')
			signIndicator = true;
		if (isalpha(src[index]))
			indicator += 1;
		index++;
	}
	if (indicator > 1 && infFound(src, 0) == false)
		return true;
	else if (signIndicator == true && indicator >= 1 && isInf(src) == false)
		return true;
	else if (src.length() == 1 && signIndicator >= 1)
		return true;
	return false;
}

bool	noSense(const char *src, int index, int dotIndicator, int signIndicator)
{
	while (src[index])
	{
		if (src[index] == '.')
			dotIndicator++;
		if (src[index] == '-' || src[index] == '+')
			signIndicator++;
		if (index > 0 && src[index] == '-')
			return true;
		index++;
	}
	if (dotIndicator > 1 || signIndicator > 1)
		return true;
	else if (charNoSense(static_cast<std::string>(src), 0, 0) == true)
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
		throw	invalidNumberOfArguments;
	else if (src == NULL || src[0] == '\0')
		throw	emptyString;
	else if (isThereForbiddenCharacter(src, 0) == true)
		throw	invalidCharacter;
	else if (noSense(src, 0, 0, 0) == true)
		throw	invalidSense;
	else if (isOverflow(src, 0, 0) == true)
		throw	overflow;
	return ;
}

bool	Convert::Error(int ac, const char **av) const
{
	try
	{
		isThereAnError( ac, av[1] );
	}
	catch(const InvalidNumberOfArguments e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch(const EmptyString	e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const InvalidCharacter e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const InvalidSense e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const Overflow e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	return false;
}
