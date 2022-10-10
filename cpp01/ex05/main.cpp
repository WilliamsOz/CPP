/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:53:45 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 13:49:01 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	std::string level;

	if (ac != 2)
		return (0);
	level.assign(av[1]);
	harl.complain(level);
	return (0);
}

