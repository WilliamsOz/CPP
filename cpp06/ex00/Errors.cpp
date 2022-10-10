/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 10:38:03 by wiozsert         ###   ########.fr       */
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

static bool	ft_isDigit( char c )
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

// static bool	isInf( std::string const src )
// {
// 	std::string const checkFloat[3] = {"-inff", "+inff", "nanf"};
// 	std::string const checkDouble[3] = {"-inf", "+inf", "nan"};

// 	for (int i = 0 ; i < 3bool
// }

// bool	charNoSense(std::string const src, int index, int indicator)
// {
// 	bool	signIndicator = false;

// 	while (src[index])
// 	{
// 		if (src[index] == '-' || src[index] == '+')
// 			signIndicator = true;
// 		if (isalpha(src[index]))
// 			indicator += 1;
// 		index++;
// 	}
// 	if (indicator > 1 && isInf(src) == false)
// 		return true;
// 	else if (signIndicator == true && indicator >= 1 && isInf(src) == false)
// 		return true;
// 	else if (src.length() == 1 && signIndicator >= 1)
// 		return true;
// 	return false;
// }

// bool	noSense(const char *src, int index, int dotIndicator, int signIndicator)
// {
// 	while (src[index])
// 	{
// 		if (src[index] == '.')
// 			dotIndicator++;
// 		if (src[index] == '-' || src[index] == '+')
// 			signIndicator++;
// 		if (index > 0 && src[index] == '-')
// 			return true;
// 		index++;
// 	}
// 	if (dotIndicator > 1 || signIndicator > 1)
// 		return true;
// 	else if (charNoSense(static_cast<std::string>(src), 0, 0) == true)
// 		return true;
// 	return false;
// }

static bool	isThereForbiddenCharacter( const char *src, int index, error_t *ptr_list )
{
	while (src[index])
	{
		if (index > 0 && src[index] == 'f')
			ptr_list->isThereF++;
		else if (ft_isChar(src[index]) == true)
			ptr_list->isThereChar++;
		else if (ft_isDigit(src[index]) == true)
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

static bool	missingSense(error_t list)
{
	std::cout << list.isThereChar << std::endl;
	std::cout << list.isThereDigit << std::endl;
	std::cout << list.isThereDot << std::endl;
	std::cout << list.isThereF << std::endl;
	std::cout << list.isThereSign << std::endl;
	return false;
}

void	Convert::isThereAnError(int ac, const char *src) const
{
	error_t	list;

	list.isThereChar = 0;
	list.isThereDigit = 0;
	list.isThereDot = 0;
	list.isThereSign = 0;
	if (ac != 2)
		throw	invalidNumberOfArguments;
	else if (src == NULL || src[0] == '\0')
		throw	emptyString;
	else if (isThereForbiddenCharacter(src, 0, &list) == true)
		throw	invalidCharacter;
	else if (missingSense(list) == true)
		throw	invalidSense;
	// else if (noSense(src, 0, 0, 0) == true)
		// throw	invalidSense;
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
	return false;
}
