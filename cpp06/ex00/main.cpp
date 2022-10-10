/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 10:16:34 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//modifier le check_error
//ajouter .0 si pas de virgule pour les float et double
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