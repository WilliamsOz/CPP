/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/02 14:45:38 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define RED "\033[1;31m"
#define GRN "\033[1;32m"
#define YEL "\033[1;33m"
#define BLU "\033[1;34m"
#define MAG "\033[1;35m"
#define CYA "\033[1;36m"
#define COLOR(x) std::cout<<x;
#define ENDCOLOR std::cout<<"\033[0m";

class Span
{
	private:
	Span( void );
	std::vector<unsigned int>	_array;
	unsigned int		_N;

	public:
		Span( unsigned int );
		~Span();
		Span( const Span& );
		Span&	operator=( const Span& );
		std::vector<unsigned int>::iterator	getPosition( unsigned long	position );
		void								addIteratorRange( std::vector<unsigned int>::iterator position, std::vector<unsigned int> newIteratorRange );
		void								addNumber( long long int );
		unsigned long long					shortestSpan( void );
		unsigned long long					longestSpan( void );
		std::vector<unsigned int> const&	getArray( void ) const;
};

#endif