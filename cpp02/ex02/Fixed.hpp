/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:20:55 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 09:58:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <tgmath.h>

class Fixed
{
	public:

	/////////////////////////ONSTRUCTOR AND DESTRUCTOR/////////////////////////
	Fixed( void );
	Fixed(Fixed const &f);
	Fixed( int const n);
	Fixed( float const f);
	~Fixed();

	/////////////////////////OVERLOAD FUNCTIONS/////////////////////////
	Fixed &			operator=( Fixed const &rhs );
	bool			operator>( Fixed const &rhs ) const;
	bool			operator<( Fixed const &rhs ) const;
	bool			operator>=( Fixed const &rhs ) const;
	bool			operator<=( Fixed const &rhs ) const;
	bool			operator==( Fixed const &rhs ) const;
	bool			operator!=( Fixed const &rhs ) const;
	Fixed			operator+( Fixed const &rhs ) const; //check
	int 			operator-( Fixed const &rhs) const;
	Fixed 			operator*( Fixed const &rhs) const;
	Fixed 			operator/( Fixed const &rhs) const;
	Fixed			operator++( int ); //post i++
	Fixed &			operator++( void ); //pre ++i
	Fixed 			operator--( int ); // post i--
	Fixed &			operator--( void ); // pre --i

	/////////////////////////MEMBER FUNCTIONS/////////////////////////
	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
	float   		toFloat( void ) const;
	int     		toInt( void ) const;
	static Fixed &	min( Fixed &lhs, Fixed &rhs );
	static const Fixed &	min( Fixed const &lhs, Fixed const &rhs );
	static Fixed &	max( Fixed &lhs, Fixed &rhs );
	static const Fixed &	max( Fixed const &lhs, Fixed const &rhs );


	private:

	int			_fixedPointNumberValue;
	static int	_numberOfFractionalBits;

};

std::ostream &	operator<<(std::ostream &o, Fixed const &f);


#endif