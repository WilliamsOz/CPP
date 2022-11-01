/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/31 16:48:17 by wiozsert         ###   ########.fr       */
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
	unsigned int		_N;
	Span( void );

	public:
	std::vector<int>	_array;

		Span( unsigned int );
		~Span();
		Span( const Span& );
		Span&	operator=( const Span& );
		void	addNumber( long );
		unsigned long	shortestSpan( void );
		unsigned long	longestSpan( void );
};

std::ostream&	operator<<( std::ostream &o, Span const &rhs );

#endif