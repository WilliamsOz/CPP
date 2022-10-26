/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:43:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 13:56:36 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename U>
void	print(U *tab)
{
	std::cout << *tab << std::endl;
}

template<typename T>
void	iter(T const &tab, unsigned long lenTab, void (*ptrFct)(const T))
{
	for (unsigned long i = 0 ; i < lenTab ; i++)
		ptrFct(&tab[i]);
}

#endif