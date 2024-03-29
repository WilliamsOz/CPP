/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:10:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 13:13:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	setNameToTheHorde(Zombie *horde, int N, std::string name)
{
	int i = 0;

	while (i < N)
	{
		horde[i].setHordeName(name);
		i++;
	}
	return (horde);
}

void	introduceYourselves(Zombie *horde, int N)
{
	int	i = 0;

	while (i < N)
	{
		horde->announce();
		i++;
	}
	return ;
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	horde = setNameToTheHorde(horde, N, name);
	introduceYourselves(horde, N);
	return (horde);
}
