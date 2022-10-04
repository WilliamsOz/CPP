/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 11:23:06 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

	// (void)ac;
	// double ld;	
	// float f;
	// // char	*xd;

	// // f = std::atof(av[1]);
	// ld = strtold(av[1], NULL);
	// std::cout << ld << std::endl;
	// // f = static_cast<float>(ld);
	// std::cout << f << std::endl;


int main(int ac, char **av)
{
	Convert	Convert;

	if (Convert.Error(ac, const_cast<const char **>(av)) == true)
		return (1);
	Convert.convert(av[1]);
	return (0);
}