/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/03 23:58:41 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// long	ft_stoi()
// {
// 	int res = 0;
// 	std::string nbr = "42";
// 	int i = 0;
// 	(void)ac;
// 	(void)av;

// 	while (nbr[i] != '\0')
// 	{
// 		res = res * 10 + (nbr[i] - '0');
// 		i++;
// 	}
// 	std::cout << res << std::endl;	
// }

int main(int ac, char **av)
{
	Convert	Convert;
	Convert.Error(ac, av);
	return (0);
}