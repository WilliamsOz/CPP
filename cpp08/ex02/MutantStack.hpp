/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:07:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/03 11:40:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#define RED "\033[1;31m"
#define GRN "\033[1;32m"
#define YEL "\033[1;33m"
#define BLU "\033[1;34m"
#define MAG "\033[1;35m"
#define CYA "\033[1;36m"
#define COLOR(x) std::cout<<x;
#define ENDCOLOR std::cout<<"\033[0m";

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		~MutantStack();
		MutantStack( const MutantStack &copy );
		MutantStack<T> const&	operator=( const MutantStack &rhs );
		typedef typename std::stack<T>::container_type::iterator	iterator;
		typename std::stack<T>::container_type::iterator			begin( void );
		typename std::stack<T>::container_type::iterator			end( void );
		
};

#include "MutantStack.tpp"

#endif