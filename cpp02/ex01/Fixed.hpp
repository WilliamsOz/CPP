/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:42:32 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 10:23:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <tgmath.h>
#include <iostream>

class Fixed
{
	public:

	Fixed( void );
	Fixed(Fixed const &f);
	Fixed( int const n);
	Fixed( float const f);
	~Fixed();
	Fixed &			operator=(Fixed const &f);
	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
	float   		toFloat( void ) const;
	int     		toInt( void ) const;

	private:

	int			_fixedPointNumberValue;
	static int	_numberOfFractionalBits;

};

std::ostream &	operator<<(std::ostream &o, Fixed const &f);

#endif