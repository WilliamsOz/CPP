/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:56:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 00:16:46 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	isThereForbiddenCharacter( char *src, int index )
{
	while (src[index])
	{
		if ((src[index] < 'a' || src[index] > 'z')
		&& (src[index] < '0' || src[index] > '9')
		&& (src[index] != '.'))
			return true;
		else
			index++;
	}
	return false;
}

bool	noSense(char *src, int index, int charIndicator, int dotIndicator)
{
	while (src[index])
	{
		if (src[index] > 'a' && src[index] < 'z')
			charIndicator++;
		if (src[index] == '.')
			dotIndicator++;
		index++;
	}
	if (charIndicator > 1 || dotIndicator > 1)
		return true;
	return false;
}

void	Convert::isThereAnError(int ac, char *src)
{
	if (ac != 2)
		throw	excp.invalidNumberOfArguments;
	else if (src == NULL || src[0] == '\0')
		throw	excp.emptyString;
	else if (isThereForbiddenCharacter(src, 0) == true)
		throw	excp.invalidCharacter;
	// else if () overflow
	else if (noSense(src, 0, 0, 0) == true)
		throw	excp.noSense;
	return ;
}