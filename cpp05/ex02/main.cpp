/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 08:53:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	cantDoNothing( void )
{
	Bureaucrat				Willy("Willy", 150);
	ShrubberyCreationForm	scf("home");

	Willy.signForm(scf);
	Willy.executeForm(scf);
	return ;
}

void	execShruberry( void )
{
	Bureaucrat				Willy("Willy", 145);
	ShrubberyCreationForm	scf("home");

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
		Willy.executeForm(rb);
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
	ShrubberyCreationForm	scf("home");
	RobotomyRequestForm		rb("Bender");
	PresidentialPardonForm	pr("Macron");
	
	scf.beSigned(Willy);
	rb.beSigned(Willy);
	pr.beSigned(Willy);
	std::cout << std::endl;
	scf.execute(Willy);
	rb.execute(Willy);
	pr.execute(Willy);
	return ;
}

void	tooMuchSign( void )
{
	Bureaucrat				Willy("Willy", 1);
	ShrubberyCreationForm	scf("home");
	RobotomyRequestForm		rb("Bender");
	PresidentialPardonForm	pr("Macron");

	scf.beSigned(Willy);
	rb.beSigned(Willy);
	pr.beSigned(Willy);
	scf.beSigned(Willy);
	rb.beSigned(Willy);
	pr.beSigned(Willy);
	return ;
}

int main(void)
{
	cantDoNothing();
	execShruberry();
	execRobotomy();
	execPresidential();
	execAllForm();
	tooMuchSign();
	return 0;
}