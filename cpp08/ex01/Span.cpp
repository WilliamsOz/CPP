/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:17:50 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/01 21:12:54 by wiozsert         ###   ########.fr       */
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
		throw	std::invalid_argument("Invalid argument given to unsigned int constructor !");
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

void	Span::addNumber( long new_number )
{
	if (_array.size() == _N)
		throw	std::out_of_range("Array is full !");
	this->_array.push_back(new_number);
	return ;
}

unsigned long	Span::shortestSpan( void )
{
	std::vector<unsigned int>	tmp = this->_array;
	unsigned long long			diff = ULLONG_MAX;

	if (tmp.size() < 2)
		throw	std::length_error("Array is too short !");
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<unsigned int>::iterator	it = tmp.begin(); it + 1 < tmp.end(); it++)
	{
		if (*(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
	}
	if (diff == ULLONG_MAX)
		throw	std::logic_error("No shortest span in this array !");
	return diff;
}

unsigned long	Span::longestSpan( void )
{
	unsigned long	res = 0;
	bool			indicator;

	if (this->_array.size() < 2)
		throw	std::length_error("Array is too short !");
	indicator = false;
	if (indicator == false)
		throw	std::logic_error("No shortest span in this array !");
	return res;
}

std::ostream&	operator<<( std::ostream &o, Span const &rhs )
{
	for (std::vector<int>::size_type i = 0 ; i < rhs._array.size() ; i++)
		o << rhs._array[i] << std::endl;
	return o;
}