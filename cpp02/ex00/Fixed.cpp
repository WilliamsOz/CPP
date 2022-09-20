/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:40:16 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/20 10:41:07 by wiozsert         ###   ########.fr       */
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

Fixed::Fixed( Fixed & f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;

    return ;
}

Fixed & Fixed::operator=(Fixed &f)
{
    std::cout << "Copy assignement operator called" << std::endl;

    if (this != &f)
        this->_fixedPointNumberValue = f.getRawBits();
    return (*this);
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

int Fixed::_numberOfFractionalBits = 8;