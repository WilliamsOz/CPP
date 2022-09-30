/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:43:09 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 10:41:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const &copy )
{
	*this = copy;
	return ;
}

Intern &    Intern::operator=( Intern const &rhs )
{
	(void)rhs;
	return *this;
}

Intern::~Intern( void )
{
	return ;
}

Form *	Intern::tryMakeForm( std::string nameOfAForm, std::string targetOfTheForm )
{
	Form    *form = NULL;
	t_formTab   formTab[3] = {
		{"robotomy request", new RobotomyRequestForm(targetOfTheForm)},
		{"shrubbery creation", new ShrubberyCreationForm(targetOfTheForm)},
		{"presidential pardon", new PresidentialPardonForm(targetOfTheForm)}
		};

	for (size_t i = 0; i < 3; i++)
	{
		if (formTab[i].nameOfAForm == nameOfAForm)
		{
			form = formTab[i].PTRForm;		
			std::cout << GRNCOLOR << "Intern creates " << formTab[i].nameOfAForm << ENDCOLOR << std::endl;
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (formTab[i].nameOfAForm != nameOfAForm)
			delete formTab[i].PTRForm;
	}
	if (form == NULL)
		throw nameOfTheFormNotFound;
	return form;
}

Form *  Intern::makeForm( std::string nameOfAForm, std::string targetOfTheForm )
{
	Form	*form = NULL;
	try
	{
		form = tryMakeForm(nameOfAForm, targetOfTheForm);
	}
	catch(NameOfFormNotFound e)
	{
		std::cerr << REDCOLOR << "Intern can't creates " << nameOfAForm << " because " << nameOfTheFormNotFound.what() << ENDCOLOR << std::endl;
	}
	return form;
}