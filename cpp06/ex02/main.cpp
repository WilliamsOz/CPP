/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:50:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 12:15:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <time.h>

int	summonRandomNum( void )
{
	int	rdm;

	srand (time(NULL));
	rdm = rand() % 3;
	return rdm;
}

int main(void)
{
	int rdm;

	rdm = summonRandomNum();
	std::cout << rdm << std::endl;
	return (0);
}