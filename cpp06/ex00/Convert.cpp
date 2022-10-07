/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/07 10:01:28 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) :_char(0), _int(0), _float(0.0f), _double(0.0),\
_isChar(false), _isInt(false), _isFloat(false), _isDouble(false),\
_impossibleConversion(false)
{
	return ;
}

Convert::~Convert( void )
{
	return ;
}

Convert::Convert( Convert const &copy )
{
	*this = copy;
	// this->_char = copy._char;
	// this->_int = copy._int;
	// this->_float = copy._float;
	// this->_double = copy._double;
	// this->_isChar = copy._isChar;
	// this->_isInt = copy._isInt;
	// this->_isFloat = copy._isFloat;
	// this->_isDouble = copy._isDouble;
	// this->_impossibleConversion = false;
	return ;
}

Convert &	Convert::operator=( Convert const &rhs )
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		this->_isChar = rhs._isChar;
		this->_isInt = rhs._isInt;
		this->_isFloat = rhs._isFloat;
		this->_isDouble = rhs._isDouble;
	}
	return *this;
}

long	Convert::ft_stoi(const char *src) const
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
	if (_isChar == true)
	{
		_char = static_cast<const char>(*src);
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
	}
	else if (_isInt == true)
	{
		_int = static_cast<int>(ft_stoi(src));
		_char = static_cast<const char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
	else if (_isFloat == true)
	{
		_float = static_cast<float>(atof(src));
		_char = static_cast<const char>(_float);
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float);
	}
	else if (_isDouble == true)
	{
		_double = static_cast<double>(strtold(src, NULL));
		_char = static_cast<const char>(_double);
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
	}
	return ;
}
