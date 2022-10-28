/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 09:41:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int>	v(42, 100);

	std::vector<int>::const_iterator	it;

	for(it = v.begin() ; it < v.end() ; ++it)
		std::cout << *it << std::endl;
	// try
	// {
		// easyfind(v, 42);
	// }
	// catch(const std::exception& e)
	// {
		// std::cerr << e.what() << std::endl;
	// }
	
	return 0;
}