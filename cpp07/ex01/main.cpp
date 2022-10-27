/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:43:23 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 12:30:29 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	integerTabTest( void )
{
	int	tab[13] = {
		42, 21, 10, 5, 2, 1, 0, -1, -2, -5, -10, -21, -42
	};

	iter(tab, sizeof(tab)/sizeof(tab[0]), &print);
	return ;
}

void	charTest( void )
{
	char	tab[6] = {
		'c', 'c', 'c', 'n', '0', '5'
	};

	iter(tab, sizeof(tab)/sizeof(tab[0]), &print);
	return ;
}

void	stringTabTest( void )
{
	std::string	tab[3] = {
		"Bonjour", "Je m'apelle", "Willy"
	};

	iter(tab, sizeof(tab)/sizeof(tab[0]), &print);
	return ;
}

int main( void )
{
	integerTabTest();
	// stringTabTest();
	// charTest();
	return (0);
}
