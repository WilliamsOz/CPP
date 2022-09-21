/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:21:13 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 11:55:16 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/////////////////////////CONSTRUCTOR AND DESTRUCTOR/////////////////////////

Fixed::Fixed( void ) : _fixedPointNumberValue(0)
{
	return ;
}

Fixed::Fixed( Fixed const & f)
{
	*this = f;

	return ;
}

Fixed::Fixed( int const n ) : _fixedPointNumberValue(n)
{
	this->_fixedPointNumberValue = n << this->_numberOfFractionalBits;
	return ;
}

Fixed::Fixed( float const f )
{
	int	pow = 256;

	this->_fixedPointNumberValue = roundf(f * pow);
	return ;
}

Fixed::~Fixed ( void )
{
	return ;
}

/////////////////////////OVERLOAD FUNCTIONS/////////////////////////

Fixed & Fixed::operator=( Fixed const &rhs )
{
	if (this != &rhs)
		this->_fixedPointNumberValue = rhs._fixedPointNumberValue;
	return (*this);
}

bool	Fixed::operator>( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue > rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator<( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue < rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue >= rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator<=( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue <= rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator==( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue == rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const &rhs ) const
{
	if (this->_fixedPointNumberValue != rhs._fixedPointNumberValue)
		return (true);
	return (false);
}

Fixed	Fixed::operator+( Fixed const &rhs ) const
{
	return Fixed(this->_fixedPointNumberValue + rhs.getRawBits());
}

int	Fixed::operator-( Fixed const &rhs ) const
{
	return (this->_fixedPointNumberValue - rhs.getRawBits());
}

Fixed	Fixed::operator*( Fixed const &rhs) const
{
	Fixed	res;
	int		power = 256;

	res._fixedPointNumberValue = roundf((this->toFloat() * rhs.toFloat()) * power);
	return (res);
}

Fixed	Fixed::operator/( Fixed const &rhs) const
{
	Fixed	res;
	int		power = 256;

	if (rhs.toFloat() == 0)
	{
		std::cout << "\033[1;31mDivision by 0 is not allowed\033[1;32m" << std::endl;
		return (res);
	}
	res._fixedPointNumberValue = roundf((this->toFloat() * rhs.toFloat()) * power);
	return (res);
}

Fixed	Fixed::operator++( int )
{
	Fixed	fixed(*this);

	++(*this);
	return (fixed);
}

Fixed &	Fixed::operator++( void )
{
	this->_fixedPointNumberValue++;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	fixed(*this);

	--(*this);
	return (fixed);
}

Fixed &	Fixed::operator--( void )
{
	this->_fixedPointNumberValue--;
	return (*this);
}

std::ostream &	operator<<( std::ostream &o, Fixed const &rhs )
{
	o << rhs.toFloat();
	return (o);
}

/////////////////////////MEMBER FUNCTIONS/////////////////////////

int     Fixed::getRawBits( void ) const
{
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

Fixed &	Fixed::min( Fixed &lhs, Fixed &rhs )
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::min( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed &	Fixed::max( Fixed &lhs, Fixed &rhs )
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::max( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

int Fixed::_numberOfFractionalBits = 8;