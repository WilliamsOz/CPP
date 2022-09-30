/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 10:41:51 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat  Willy("Willy", 1);
	Intern  someRandomIntern;
	Form*   rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf != NULL)
	{
		rrf->beSigned(Willy);
		rrf->execute(Willy);
		delete rrf;
	}
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (rrf != NULL)
    {
        rrf->beSigned(Willy);
        rrf->execute(Willy);
        delete rrf;
    }
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "Macron");
    if (rrf != NULL)
    {
        rrf->beSigned(Willy);
        rrf->execute(Willy);
        delete rrf;
    }
	return 0;
}