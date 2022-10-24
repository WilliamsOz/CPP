/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:57:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/24 23:04:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"
#define SC(x) std::cout<<x;
#define EC std::cout<<ENDCOLOR;

template<typename T>
class Array
{
	private:
	T const	*_tab;
	size_t	_lenOfTab;

	public:
	Array( void );
	~Array();
	Array( unsigned int n );
	Array(T const &copy);
	Array<T>&	operator=( const Array<T> &rhs );

	size_t		size( void );

	T const &	operator[]( size_t index );

class IndexTooHigh : public std::exception
{
	public :
	virtual const char *	what() const throw()
	{
		return ("index larger than array size !");
	}
};
class IndexNegative : public std::exception
{
	public :
	virtual const char *	what() const throw()
	{
		return ("index can't be negative !");
	}
};
	IndexTooHigh	indexTooHigh;
	IndexNegative	indexNegative;
};

#include "Array.tpp"

#endif