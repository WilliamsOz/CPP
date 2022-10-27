/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/26 18:45:14 by wiozsert         ###   ########.fr       */
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

char :
seulement a-z && A-Z ==> tout les char existant sauf ceux non affichable
*/
int main(int ac, const char **av)
{
	Convert	Convert;

	try
	{
		Convert.Error(ac, av[1]);
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