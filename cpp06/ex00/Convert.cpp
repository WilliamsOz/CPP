/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 00:09:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void )
{

	return ;
}

Convert::~Convert( void )
{

	return ;
}

bool	Convert::Error( int ac, char **av )
{
	try
	{
		isThereAnError( ac, av[1] );
	}
	catch(const Exception::InvalidNumberOfArguments e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	catch(const Exception::EmptyString	e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	catch (const Exception::InvalidCharacter e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	catch (const Exception::NoSense e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	return false;
}