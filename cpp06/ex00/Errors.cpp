/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 11:46:43 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	isThereForbiddenCharacter( const char *src, error_t *ptr_list, int index )
{
	while (src[index])
	{
		if (index > 0 && src[index] == 'f')
			ptr_list->isThereF++;
		else if (src[index] == '.')
			ptr_list->isThereDot++;
		else if (src[index] == '+' || src[index] == '-')
			ptr_list->isThereSign++;
		else if (ft_isDigit(src[index]) == true)
			ptr_list->isThereDigit++;
		else if (ft_isChar(src[index]) == true)
			ptr_list->isThereChar++;
		else
			throw	Convert::InvalidCharacter();
		index++;
	}
	return ;
}

static void	missingSense(const char *src, error_t list, int index)
{
	if (list.isThereSign > 1 || list.isThereDot > 1 || list.isThereF > 1)
		throw	Convert::InvalidSense();
	else if (list.isThereChar == 1
		&& (list.isThereDigit != 0 || list.isThereDot != 0
		|| list.isThereF != 0 || list.isThereSign != 0))
		throw	Convert::InvalidSense();
	else if (list.isThereChar > 1 && isInfinityConversion(static_cast<std::string>(src)) == false)
		throw	Convert::InvalidSense();
	else if (list.isThereSign == 1 && src[index] != '-' && src[index] != '+')
		throw	Convert::InvalidSense();
	else if (list.isThereF == 1 && src[ft_strlen(src) - 1] != 'f')
		throw	Convert::InvalidSense();
	return ;
}

static void	badArguments( int ac, const char *src )
{
	if (ac != 2)
		throw	Convert::InvalidNumberOfArguments();
	else if (!src || !src[0])
		throw	Convert::EmptyString();
}

void	Convert::error(int ac, const char *src) const
{
	error_t	list;

	badArguments(ac, src);
	if (isInfinityConversion( static_cast<std::string>(src) ) == true)
		return ;
	initList( &list );
	isThereForbiddenCharacter(src, &list, 0);
	missingSense(src, list, 0);
	return ;
}
