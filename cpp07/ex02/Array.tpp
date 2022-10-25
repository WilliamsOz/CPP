/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:25:07 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/25 14:26:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdio.h>

template<typename T>
Array<T>::Array( void )
: _tab(NULL), _lenOfTab(0)
{
	return ;
}

template<typename T>
Array<T>::~Array( void )
{
	// if (this->_tab != NULL)
		delete [] this->_tab;
}

template<typename T>
Array<T>::Array( unsigned int n )
: _lenOfTab(n)
{
	printf("%s\n", "LAAA");
	std::cout << n << std::endl;
	if (n <= 0)
		throw std::out_of_range("Out of range !");
	// this->_lenOfTab = n;
	// this->_tab = new T[_lenOfTab];
}

template<typename T>
Array<T>::Array( T const &copy )
{
	printf("%s\n", "ICI");
	*this = copy;
	return ;
}

template<typename T>
Array<T>& Array<T>::operator=( const Array<T> &rhs )
{
	this->_lenOfTab = rhs._lenOfTab;
	this->_tab = new T[this->_lenOfTab];
	return *this;
}

template<typename T>
int	Array<T>::size( void )
{
	return this->_lenOfTab;
}

template<typename T>
T &	Array<T>::operator[]( int index )
{
	if (index + 1 > this->_lenOfTab)
		throw indexTooHigh;
	else if (index < 0)
		throw indexNegative;
	return this->_tab[index];
}