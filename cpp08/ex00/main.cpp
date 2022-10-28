/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 14:46:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	integerFound( void )
{
	std::vector<int>	v(100, 100);
	std::vector<int>::iterator	it;

	v.assign(42, 42);
	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	integerNotFound( void )
{
	std::vector<int>	v(100, 100);
	std::vector<int>::iterator	it;

	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

int main( void )
{
	integerFound();
	integerNotFound();
	return 0;
}