/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:35 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/15 10:49:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	Sed	sed;

	if (ac != 4)
		std::cerr << REDCOLOR << "Error, You must enter 3 arguments" << ENDCOLOR << std::endl;
	else
	{
		if (sed.validArguments(av[1]) == false)
			return (1);
		else
			sed.createNewFile(av[1], av[2], av[3]);
	}
	return (0);
}
