/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:17:50 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/02 15:30:01 by wiozsert         ###   ########.fr       */
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

std::vector<unsigned int>::iterator	Span::getPosition(unsigned long	position)
{
	std::vector<unsigned int>::iterator	Iterator;

	if (position > this->_array.size())
		throw std::out_of_range("Cant get position because index is out of range !");
	Iterator = this->_array.begin() + position;
	return Iterator;
}

void	Span::addIteratorRange(std::vector<unsigned int>::iterator position, std::vector<unsigned int>	newIteratorRange)
{
	if (newIteratorRange.size() > this->_N - this->_array.size())
		throw std::out_of_range("New range of iterator size is too big for array !");
	this->_array.insert(position, newIteratorRange.begin(), newIteratorRange.end());
	return ;
}

unsigned long long	Span::shortestSpan( void )
{
	std::vector<unsigned int>	tmp = this->_array;
	unsigned long long 				diff = ULONG_MAX;

	if (tmp.size() < 2)
		throw	std::length_error("Shortest span can not exist because array is too short !");
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
		throw	std::length_error("Longest span can not exist because array is too short !");
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1 ) - *tmp.begin());
}

std::vector<unsigned int> const&	Span::getArray( void ) const
{
	return this->_array;
}
