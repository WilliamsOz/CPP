/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/03 16:44:11 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar( void )
{

	return ;
}

Scalar::~Scalar( void )
{

	return ;
}

void	Scalar::isThereAnError(int ac, char **av)
{
	(void)av;
	if (ac != 2)
		throw ex.invalidNumberOfArguments;
	return ;
}

bool	Scalar::Error( int ac, char **av )
{
	try
	{
		isThereAnError( ac, av );
	}
	catch(const Exception::InvalidNumberOfArguments e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	return false;
}