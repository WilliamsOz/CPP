/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:40:18 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/13 17:17:32 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

	Fixed( void );
	Fixed( Fixed &copy );
	~Fixed();
	Fixed&	operator=(Fixed const &f);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	private:

	int			_fixedPointNumberValue;
	const static int	_numberOfFractionalBits;

};

#endif