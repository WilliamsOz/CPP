/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 11:26:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/* Ne fonctionne pas correctement
float :
nanf
+inff
-inff

double :
nan
+inf
-inf

*/
int main(int ac, const char **av)
{
	Convert	Convert;

	try
	{
		Convert.error(ac, av[1]);
		Convert.detectCase(av[1]);
		Convert.convert(av[1]);
		Convert.print();
	}
	catch ( const std::exception &e )
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
		return 1;
	}
	return (0);
}