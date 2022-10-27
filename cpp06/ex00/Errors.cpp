/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 23:30:30 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	isThereForbiddenCharacter( const char *src, int index, error_t *ptr_list )
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
			throw	Convert::InvalidCharacter();
		index++;
	}
	return ;
}

static bool	missingSense(const char *src, error_t list, int index)
{
	if (list.isThereSign > 1 || list.isThereDot > 1 || list.isThereF > 1)
		return true;
	else if (list.isThereChar == 1
		&& (list.isThereDigit != 0 || list.isThereDot != 0
		|| list.isThereF != 0 || list.isThereSign != 0))
		return true;
	else if (list.isThereChar > 1 && isInfinityConversion(static_cast<std::string>(src)) == false)
		return true;
	else if (list.isThereSign == 1 && src[index] != '-' && src[index] != '+')
		return true;
	else if (list.isThereF == 1 && src[ft_strlen(src) - 1] != 'f')
		return true;
	return false;
}

static void	badArguments( int ac, const char *src )
{
	if (ac != 2)
		throw	Convert::InvalidNumberOfArguments();
	else if (!src || !src[0])
		throw	Convert::EmptyString();
}

void	Convert::Error(int ac, const char *src) const
{
	error_t	list;

	if (isInfinityConversion( static_cast<std::string>(src) ) == true)
		return ;
	badArguments(ac, src);
	initList( &list );
	isThereForbiddenCharacter(src, 0, &list);
	if (missingSense(src, list, 0) == true)
		throw	Convert::InvalidSense();
	return ;
}
