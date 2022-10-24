/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:57:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/24 23:08:06 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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

int main( void )
{
	Array<int>	tab(10);

	// iter(&tab, sizeof(tab)/sizeof(tab[0]), &print);
	for (size_t i = 0 ; i < tab.size() ; i++)
		std::cout << tab[i] << std::endl;
	return 0;
}