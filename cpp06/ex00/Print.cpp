/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 11:37:51 by wiozsert         ###   ########.fr       */
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
		std::cout << "char: '" << _char << "'" << std::endl;
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
	std::stringstream	o;
	std::string	str_value;

	o << _float;
	str_value = o.str();
	std::cout << "float: " << _float;
	if (this->_isInfinityConv == true || str_value == "inf" || str_value == "-inf")
	{
		std::cout << "f" << std::endl;
		return ;
	}
	else if (str_value.find('.') == std::string::npos && str_value.find('e') == std::string::npos)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	return ;
}

void	Convert::printDouble( void ) const
{
	std::stringstream	o;
	std::string	str_value;

	o << _double;
	str_value = o.str();
	std::cout << "double: " << _double;
	if (this->_isInfinityConv == true || str_value == "inf" || str_value == "-inf")
	{
		std::cout << std::endl;
		return ;
	}
	else if (str_value.find('.') == std::string::npos && str_value.find('e') == std::string::npos)
		std::cout << ".0";
	std::cout << std::endl;
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