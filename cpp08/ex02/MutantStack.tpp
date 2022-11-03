/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:51 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/03 11:47:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack( void )
{
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack &copy )
{
	*this = copy;
	return ;
}

template<typename T>
MutantStack<T> const&	MutantStack<T>::operator=( const MutantStack &rhs )
{
	if (*this != rhs)
		*this = rhs;
	return *this ;
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin( void )
{
	return this->c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end( void )
{
	return this->c.end();
}