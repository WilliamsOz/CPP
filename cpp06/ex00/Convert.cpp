/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 15:56:01 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) :_char(0), _int(0), _float(0.0f), _double(0.0),\
_isChar(false), _isInt(false), _isFloat(false), _isDouble(false),\
_isInfinityConv(false), _isCharOverflow(false), _isIntOverflow(false)
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
		this->_isInfinityConv = rhs._isInfinityConv;
		this->_isCharOverflow = rhs._isCharOverflow;
		this->_isIntOverflow = rhs._isIntOverflow;
	}
	return *this;
}

bool	Convert::getIsChar( void )
{
	return this->_isChar;
}

char	Convert::getChar( void )
{
	return this->_char;
}

bool	Convert::getIsInt( void )
{
	return this->_isInt;
}

int	Convert::getInt( void )
{
	return this->_int;
}

bool	Convert::getIsFloat( void )
{
	return this->_isFloat;
}

float	Convert::getFloat( void )
{
	return this->_float;
}

bool	Convert::getIsDouble( void )
{
	return this->_isDouble;
}

double	Convert::getDouble( void )
{
	return this->_double;
}

std::ostream &	operator<<( std::ostream &o, Convert &rhs )
{
	o << "is Char : " << rhs.getIsChar() << " value : " << rhs.getChar() << std::endl;
	o << "is Int : " << rhs.getIsInt() << " value : " << rhs.getInt() << std::endl;
	o << "is Float : " << rhs.getIsFloat() << " value : " << rhs.getFloat() << std::endl;
	o << "is Double : " << rhs.getIsDouble() << " value : " << rhs.getDouble() << std::endl;
	return o;
}

void	Convert::convertToChar( const char *src )
{
	if (_isCharOverflow == true)
	{
		_isCharOverflow = true;
		_int = static_cast<int>(atoi(src));
		_float = static_cast<float>(atof(src));
		_double = static_cast<double>(atof(src));
	}
	else
	{
		_char = static_cast<const char>(*src);
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
	}
	return ;
}

void	Convert::convertToInt( const char *src )
{
	if (_isIntOverflow == true)
	{
		_float = static_cast<float>(atof(src));
		_double = static_cast<double>(atof(src));
	}
	else
	{
		_int = static_cast<int>(atoi(src));
		_char = static_cast<const char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
	return ;
}

void	Convert::convertToFloat( const char *src )
{
	_float = static_cast<float>(atof(src));
	_char = static_cast<const char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
	return ;
}

void	Convert::convertToDouble( const char *src )
{
	_double = static_cast<double>(atof(src));
	_char = static_cast<const char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	return ;
}

void	Convert::convert( const char *src )
{
	if (atol(src) > CHAR_MAX || atol(src) < CHAR_MIN)
		_isCharOverflow = true;
	if (atol(src) > INT_MAX || atol(src) < INT_MIN)
		_isIntOverflow = true;
	if (_isChar == true)
		convertToChar(src);
	else if (_isInt == true)
		convertToInt(src);
	else if (_isFloat == true)
		convertToFloat(src);
	else if (_isDouble == true)
		convertToDouble(src);
	return ;
}