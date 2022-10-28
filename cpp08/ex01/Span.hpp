/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 15:24:50 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"
#define SC(x) std::cout<<x;
#define EC std::cout<<ENDCOLOR;

class Span
{
	private:
	

	public:
	Span( void );
	~Span();
	Span( const Span &copy );
	Span &	operator=( const Span &rhs );
	void	addNumber( void );
	void	shortestSpan( void ); //trouver la plus petite distance entre les nombres stockés
	void	longestSpan( void ); //trouver la plus grande distance entre les nombres stockés
};


#endif