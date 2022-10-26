/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:25:07 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 14:39:47 by wiozsert         ###   ########.fr       */
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
	if (this->_lenOfTab > 0)
		delete [] this->_tab;
}

template<typename T>
Array<T>::Array( unsigned int n )
{ 
	if (n >= INT_MAX)
		throw std::overflow_error("overflow error !");
	this->_lenOfTab = n;
	this->_tab = new T[_lenOfTab];
	return ;
}

template<typename T>
Array<T>::Array( const Array<T> &copy )
{
	this->_lenOfTab = copy.size();
	this->_tab = new T[this->_lenOfTab];
	for (int i = 0 ; i < copy.size() ; i++)
		_tab[i] = copy._tab[i];
	return ;
}

template<typename T>
int	Array<T>::size( void ) const
{
	return this->_lenOfTab;
}

template<typename T>
Array<T> const& Array<T>::operator=( const Array<T> &rhs )
{
	if (this != &rhs)
	{
		if (this->_lenOfTab > 0)
			delete [] this->_tab;
		this->_lenOfTab = rhs._lenOfTab;
		this->_tab = new T[this->_lenOfTab];
		for (int i = 0 ; i < rhs._lenOfTab ; i++)
			this->_tab[i] = rhs._tab[i];
	}
	return *this;
}

template<typename T>
T &	Array<T>::operator[]( int index )
{
	if (index >= this->_lenOfTab)
		throw Array<T>::IndexTooHigh();
	else if (index < 0)
		throw Array<T>::IndexNegative();
	return this->_tab[index];
}