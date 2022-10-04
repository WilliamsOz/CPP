/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 11:24:39 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void )
: _charNbr(0), _intNbr(0), _floatNbr(0), _doubleNbr(0)
{
	return ;
}

Convert::~Convert( void )
{
	return ;
}

bool	Convert::Error( int ac, const char **av ) const
{
	try
	{
		isThereAnError( ac, av[1] );
	}
	catch(const Exception::InvalidNumberOfArguments e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch(const Exception::EmptyString	e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const Exception::InvalidCharacter e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const Exception::NoSense e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	catch (const Exception::Overflow e)
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
		return true;
	}
	return false;
}

long	Convert::ft_stoi( const char *src ) const
{
	long res = 0;
	int index = 0;
	int	sign = 0;

	if (src[index] == '-')
	{
		sign += 1;
		index++;
	}
	while (src[index] != '\0' && (src[index] >= '1' && src[index] <= '9'))
	{
		res = res * 10 + (src[index] - '0');
		index++;
	}
	if (sign == 1)
		return (res * -1);
	return res;
}

void	Convert::convert( const char *src )
{
	_charNbr = static_cast<char>(ft_stoi(src));
	_intNbr = static_cast<int>(ft_stoi(src));
	print();
	return ;
}
