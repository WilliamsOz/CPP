/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/09 14:39:23 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, const char **av)
{
	Convert	Convert;

	if (Convert.Error(ac, av) == true)
		return (1);
	Convert.detectCase(av[1]);
	Convert.convert(av[1]);
	Convert.print();
	return (0);
}