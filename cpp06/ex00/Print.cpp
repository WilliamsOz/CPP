/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 10:14:20 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	Convert::printChar( void ) const
{
	if (_isInfinityConv == true || _isCharOverflow == true)
		std::cout << "char: impossible" << std::endl;
	else if (_char < 32 || _char > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;
	return ;
}

void	Convert::printInt( void ) const
{
	if (_isInfinityConv == true || _isIntOverflow == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
	return ;
}

void	Convert::printFloat( void ) const
{
	

	std::cout << "float: " << _float << "f" << std::endl;
	return ;
}

void	Convert::printDouble( void ) const
{
	

	std::cout << "double: " << _double << std::endl;
	return ;
}

void	Convert::print( void ) const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
	return ;
}