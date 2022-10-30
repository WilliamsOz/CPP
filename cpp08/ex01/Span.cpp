/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:17:50 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/30 11:39:22 by wiozsert         ###   ########.fr       */
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
	(void)copy;
	return ;
}

Span&	Span::operator=( const Span &rhs )
{
	(void)rhs;
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
	std::vector<int>::iterator	first;
	std::vector<int>::iterator	second;
	long						shortestSpan;
	long						tmp;
	bool						indicator;

	if (this->_array.size() < 2)
		throw	std::length_error("Array is too short !");
	first = this->_array.begin();
	second = first + 1;
	indicator = false;
	for (; second < this->_array.end() ; first++, second++)
	{
		if (*second > *first)
		{
			if (indicator == false)
			{
				shortestSpan = *second - *first;
				indicator = true;
			}
			else
			{
				tmp = *second - *first;
				if (tmp < shortestSpan)
					shortestSpan = tmp;
			}
		}
	}
	if (indicator == false)
		throw	std::logic_error("No shortest span in this array !");
	return shortestSpan;
}

unsigned long	Span::longestSpan( void )
{
	unsigned long	longestSpan = 0;

	if (this->_array.size() < 2)
		throw	std::length_error("Array is too short !");
	
	return longestSpan;
}

std::ostream&	operator<<( std::ostream &o, Span const &rhs )
{
	for (std::vector<int>::size_type i = 0 ; i < rhs._array.size() ; i++)
		o << rhs._array[i] << std::endl;
	return o;
}