/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:25:07 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/24 23:04:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array( void )
{
	this->_tab = new T[0];
}

template<typename T>
Array<T>::~Array( void )
{
	delete [] this->_tab;
}

template<typename T>
Array<T>::Array( unsigned int n )
{
	this->_lenOfTab = n;
	this->_tab = new T[_lenOfTab];
}

template<typename T>
Array<T>::Array( T const &copy )
{
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
size_t Array<T>::size( void )
{
	return this->_lenOfTab;
}

template<typename T>
T const &	Array<T>::operator[]( size_t index )
{
	if (index + 1 > this->_lenOfTab)
		throw indexTooHigh;
	else if (index < 0)
		throw indexNegative;
	return this->_tab[index];
}


