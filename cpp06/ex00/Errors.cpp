/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 11:59:14 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static bool	ft_isChar( char c )
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

static bool	ft_isdigit( char c )
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

static bool	isThereForbiddenCharacter( const char *src, int index, error_t *ptr_list )
{
	while (src[index])
	{
		if (index > 0 && src[index] == 'f')
			ptr_list->isThereF++;
		else if (ft_isChar(src[index]) == true)
			ptr_list->isThereChar++;
		else if (ft_isdigit(src[index]) == true)
			ptr_list->isThereDigit++;
		else if (src[index] == '.')
			ptr_list->isThereDot++;
		else if (src[index] == '+' || src[index] == '-')
			ptr_list->isThereSign++;
		else
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
		if (src == checkFloat[i] || src == checkDouble[i])
			return true;
		else
			i++;
	}
	return false;
}

static int	ft_strlen(const char *src)
{
	int index = 0;

	if (src == NULL)
		return index;
	while (src[index])
		index++;
	return index;
}

static bool	missingSense(const char *src, error_t list, int index)
{
	if (list.isThereSign > 1 || list.isThereDot > 1 || list.isThereF > 1)
		return true;
	else if (list.isThereChar == 1
		&& (list.isThereDigit != 0 || list.isThereDot != 0
		|| list.isThereF != 0 || list.isThereSign != 0))
		return true;
	else if (list.isThereChar > 1 && isInf(static_cast<std::string>(src)) == false)
		return true;
	else if (list.isThereSign == 1 && src[index] != '-' && src[index] != '+')
		return true;
	else if (list.isThereF == 1 && src[ft_strlen(src) - 1] != 'f')
		return true;
	return false;
}

void	Convert::isThereAnError(int ac, const char *src) const
{
	error_t	list;

	if (ac != 2)
		throw	invalidNumberOfArguments;
	else if (src == NULL || src[0] == '\0')
		throw	emptyString;
	list.isThereChar = 0;
	list.isThereDigit = 0;
	list.isThereDot = 0;
	list.isThereF = 0;
	list.isThereSign = 0;
	if (isThereForbiddenCharacter(src, 0, &list) == true)
		throw	invalidCharacter;
	else if (missingSense(src, list, 0) == true)
		throw	invalidSense;
	return ;
}

//checkSignPosition
//fIsntAtLastPosition
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
	return false;
}
