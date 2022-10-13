/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:40:16 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 23:06:16 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointNumberValue(0)
{
	std::cout << "Defaut constructor called" << std::endl;
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;

	*this = copy;
	return ;
}

Fixed &	Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignement operator called" << std::endl;

	if (this != &f)
		this->_fixedPointNumberValue = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNumberValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointNumberValue = raw;
	return ;
}

const int Fixed::_numberOfFractionalBits = 8;

/* 
42
0010 1010
32 + 8 + 2 = 42
0010 1010


0000 0000  0000 0000  0000 0000  0000 0000 = int
0000 0000  0000 0000  0000 0000  0000 0000 = float
SEEE EEEE  E
S--EX--

 */