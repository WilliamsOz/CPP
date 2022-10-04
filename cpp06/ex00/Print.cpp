/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 11:22:34 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void printChar( char c )
{
    if (c == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

static void printInteger( int nbr )
{
	std::cout << "int: " << nbr << std::endl;
    return ;
}

void	Convert::print( void )
{
    printChar(_charNbr);
    printInteger(_intNbr);
	std::cout << "float: " << _floatNbr << "f" << std::endl;
	std::cout << "double: " << _charNbr << std::endl;
	return ;
}