/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:42:36 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 10:18:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointNumberValue(0)
{
	std::cout << "Defaut constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;

	return ;
}

Fixed::Fixed( int const n ) : _fixedPointNumberValue(n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumberValue = n << this->_numberOfFractionalBits;
	return ;
}

Fixed::Fixed( float const f )
{
	int	pow = 256;

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNumberValue = roundf(f * pow);
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPointNumberValue = rhs._fixedPointNumberValue;
	return (*this);
}

std::ostream &	operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}

int     Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNumberValue);
}

void    Fixed::setRawBits( int const raw )
{
	this->_fixedPointNumberValue = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	int		pow = 256;
	float	res = 0;

	res = (float)this->_fixedPointNumberValue / pow;
	return (res);
}

int		Fixed::toInt( void ) const
{
	int	res;
	
	res = this->_fixedPointNumberValue >> this->_numberOfFractionalBits;
	return (res);
}

int Fixed::_numberOfFractionalBits = 8;