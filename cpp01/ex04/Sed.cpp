/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:57:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/25 15:43:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed( void )
{

	return ;
}

Sed::~Sed( void )
{

	return ;
}

bool	Sed::argumentErrors(char *fileName, char *from, char *to)
{
	(void)from;
	(void)to;
	if (fileNameErrors(fileName) == TRUE)
		return (TRUE);
	// else if (from)
	// 	return (TRUE);
	// else if (to)
	// 	return (TRUE);
	return (FALSE);
}