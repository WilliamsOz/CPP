/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:57:13 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	cantDoNothing( void )
{
	Bureaucrat				Willy("Willy", 150);
	ShrubberyCreationForm	scf("Garden");
	RobotomyRequestForm		rb("Bender");
	PresidentialPardonForm	pr("Macron");

	Willy.signForm(scf);
	Willy.executeForm(scf);
	Willy.signForm(rb);
	Willy.executeForm(rb);
	Willy.signForm(pr);
	Willy.executeForm(pr);
	return ;
}

void	execShruberry( void )
{
	Bureaucrat				Willy("Willy", 145);
	ShrubberyCreationForm	scf("Garden");

	Willy.signForm(scf);
	Willy.executeForm(scf);
	for (size_t i = 0; i < 8; i++)
		Willy.levelUp();	
	Willy.executeForm(scf);
	return ;
}

void	execRobotomy( void )
{
	Bureaucrat				Willy("Willy", 45);
	RobotomyRequestForm		rb("Bender");
	
	Willy.signForm(rb);
	for (size_t i = 0; i < 5; i++)
	{
		Willy.executeForm(rb);
		std::cout << std::endl;
	}
	return ;
}

void	execPresidential( void )
{
	Bureaucrat				Willy("Willy", 5);
	PresidentialPardonForm	pr("Macron");

	Willy.signForm(pr);
	Willy.executeForm(pr);
	return ;
}

void	execAllForm( void )
{
	Bureaucrat				Willy("Willy", 1);
	ShrubberyCreationForm	scf("Garden");
	RobotomyRequestForm		rb("Bender");
	PresidentialPardonForm	pr("Macron");
	
	Willy.signForm(scf);
	Willy.signForm(rb);
	Willy.signForm(pr);
	std::cout << std::endl;
	Willy.executeForm(scf);
	Willy.executeForm(rb);
	Willy.executeForm(pr);
	return ;
}

void	tryExecuteNotSignedForm( void )
{
	Bureaucrat				Willy("Willy", 145);
	ShrubberyCreationForm	scf("Garden");
	RobotomyRequestForm		rb("Bender");
	PresidentialPardonForm	pr("Macron");

	Willy.executeForm(scf);
	Willy.executeForm(rb);
	Willy.executeForm(pr);
	return ;
}

int main(void)
{
	cantDoNothing();
	// execShruberry();
	// execRobotomy();
	// execPresidential();
	// execAllForm();
	// tryExecuteNotSignedForm();
	return 0;
}