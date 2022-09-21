/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:40:18 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 10:09:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

	Fixed( void );
	Fixed(Fixed &f);
	~Fixed();
	Fixed&	operator=(Fixed const &f);
	int		getRawBits( void ) const;//renvoie la valeur brute de la valeur à virgule fixe
	void	setRawBits( int const raw );//définit la valeur brute du nombre à virgule fixe.

	private:

	int			_fixedPointNumberValue;
	const static int	_numberOfFractionalBits;

};

#endif