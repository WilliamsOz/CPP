/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:30:59 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	InternCreateRobotomyRequest( void )
{
	Bureaucrat  Willy("Willy", 1);
	Intern  someRandomIntern;
	Form*   rrf = NULL;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf != NULL)
	{
		Willy.signForm(*rrf);
		Willy.executeForm(*rrf);
		Willy.executeForm(*rrf);
		Willy.executeForm(*rrf);
		Willy.executeForm(*rrf);
		delete rrf;
	}
	return ;
}

void	InternCreateShrubberyCreation( void )
{
	Bureaucrat  Willy("Willy", 1);
	Intern  someRandomIntern;
	Form*   rrf = NULL;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	if (rrf != NULL)
	{
		Willy.signForm(*rrf);
		Willy.executeForm(*rrf);
		delete rrf;
	}
	return ;
}

void	InternCreatePresidentialPardon( void )
{
	Bureaucrat  Willy("Willy", 1);
	Intern  someRandomIntern;
	Form*   rrf = NULL;

	rrf = someRandomIntern.makeForm("presidential pardon", "Macron");
	if (rrf != NULL)
	{
		Willy.signForm(*rrf);
		Willy.executeForm(*rrf);
		delete rrf;
	}
	return ;
}

void	InternCreateUnknowForm( void )
{
	Bureaucrat  Willy("Willy", 1);
	Intern  someRandomIntern;
	Form*   rrf = NULL;

	rrf = someRandomIntern.makeForm("Unknow Form", "Macron");
	if (rrf != NULL)
	{
		Willy.signForm(*rrf);
		Willy.executeForm(*rrf);
		delete rrf;
	}
	return ;
}

void	SubjectTest( void )
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	(void)rrf;
	return ;
}

int main(void)
{
	SubjectTest();
	// InternCreateRobotomyRequest();
	// InternCreateShrubberyCreation();
	// InternCreatePresidentialPardon();
	// InternCreateUnknowForm();
	return 0;
}