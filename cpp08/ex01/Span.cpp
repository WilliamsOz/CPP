/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:17:50 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/02 23:19:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
	return ;
}

Span::Span( unsigned int N )
: _N(N)
{
	if(this-> _N == 0)
		throw	std::invalid_argument("Size of array cant be zero !");
	return ;
}

Span::~Span( void )
{
	return ;
}

Span::Span( const Span &copy )
{
	this->_N = copy._N;
	this->_array = copy._array;
	return ;
}

Span&	Span::operator=( const Span &rhs )
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_array = rhs._array;
	}
	return *this;
}

void	Span::addNumber( long long int newNumber )
{
	if (_array.size() == _N)
		throw	std::runtime_error("Array is full !");
	this->_array.push_back(newNumber);
	return ;
}

void	Span::addIteratorRange(std::vector<unsigned int>	newRangeOfIterator)
{
	
	for (std::vector<unsigned int>::iterator it = newRangeOfIterator.begin() ;
			this->_array.size() < this->_N && it != newRangeOfIterator.end() ;
			it++)
		this->_array.push_back(*it);
	return ;
}

unsigned long long	Span::shortestSpan( void )
{
	std::vector<unsigned int>	tmp = this->_array;
	unsigned long long 				diff = ULONG_MAX;

	if (tmp.size() < 2)
		throw	std::length_error("Can't find shortest span because array is too short !");
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<unsigned int>::iterator	it = tmp.begin() ; it + 1 < tmp.end() ; it++)
	{
		if (*(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
	}
	return diff;
}

unsigned long long	Span::longestSpan( void )
{
	std::vector<unsigned int>	tmp = this->_array;

	if (this->_array.size() < 2)
		throw	std::length_error("Can't find longest span because array is too short !");
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1 ) - *tmp.begin());
}

std::vector<unsigned int> const&	Span::getArray( void ) const
{
	return this->_array;
}
