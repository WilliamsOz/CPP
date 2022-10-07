/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/07 10:07:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	Convert::printChar( void ) const
{
	if (_impossibleConversion == true)
		std::cout << "char: impossible" << std::endl;
	else if (_char < 32 || _char > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;
	return ;
}

void	Convert::printInt( void ) const
{
	if (_impossibleConversion == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
	return ;
}

void	Convert::print( void ) const
{
	printChar();
	printInt();
	std::cout << "float: " << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
	return ;
}