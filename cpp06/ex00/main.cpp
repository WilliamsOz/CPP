/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 16:12:08 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, const char **av)
{
	Convert	Convert;

	try
	{
		Convert.Error(ac, av[1]);
		Convert.detectCase(av[1]);
		Convert.convert(av[1]);
		Convert.print();
	}
	catch ( const std::exception &e )
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
		return 1;
	}
	return (0);
}