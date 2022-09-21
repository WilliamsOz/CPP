/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:42:32 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 10:09:45 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <tgmath.h>
#include <iostream>
#include <stdlib.h> // del

class Fixed
{
	public:

	Fixed( void );
	Fixed(Fixed const &f);
	Fixed( int const n);
	Fixed( float const f);
	~Fixed();
	Fixed &			operator=(Fixed const &f);
	int				getRawBits( void ) const;//renvoie la valeur brute de la valeur à virgule fixe
	void			setRawBits( int const raw );//définit la valeur brute du nombre à virgule fixe
	float   		toFloat( void ) const;
	int     		toInt( void ) const;

	private:

	int			_fixedPointNumberValue;
	static int	_numberOfFractionalBits;

};

std::ostream &	operator<<(std::ostream &o, Fixed const &f);

#endif