/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:53:00 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 09:06:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << GRNCOLOR << "Give me a good portion and add some extra cheese and bacon, now !" << ENDCOLOR << std::endl;
	return ;
}
void	Harl::info( void )
{
	std::cout << MAGCOLOR << "What ??? It's the first time that someone refuse something me here, it is unacceptable !" << ENDCOLOR << std::endl;
	return ;
}

void	Harl::warning( void )
{
	std::cout << YELCOLOR << "You are nobody, give me what i'm asking for or you will be have problems !" << ENDCOLOR << std::endl;
	return ;
}

void	Harl::error( void )
{
	std::cout << REDCOLOR << "Be sure that it's your last day here !" << ENDCOLOR << std::endl;
	return ;
}

void	Harl::complain( std::string level )
{
	t_tab	tab[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	Harl	harl;
	void	(Harl::*f)();
	int		i = 0;

	while (i < 4)
	{
		if (tab[i].level == level)
		{
			f = tab[i].f;
			(harl.*f)();
			return ;
		}
		else
			i++;
	}
	return ;
}
