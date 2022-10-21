/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:07:00 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:20:16 by wiozsert         ###   ########.fr       */
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

Intern&	Intern::operator=( Intern const &rhs )
{
	(void)rhs;
	return *this;
}

Intern::~Intern( void )
{
	return ;
}

Form *  Intern::makeForm( std::string nameOfAForm, std::string targetOfTheForm )
{
	t_formTab   formTab[3] = {
		{"robotomy request", new RobotomyRequestForm(targetOfTheForm)},
		{"shrubbery creation", new ShrubberyCreationForm(targetOfTheForm)},
		{"presidential pardon", new PresidentialPardonForm(targetOfTheForm)}
		};
	Form	*form = NULL;

	try
	{
		for (size_t i = 0 ; i < 3 ; i++)
		{
			if (formTab[i].nameOfAForm == nameOfAForm)
			{
				form = formTab[i].PTRForm;
				SC(GRNCOLOR)
				std::cout << "Intern creates " << formTab[i].nameOfAForm << std::endl;
				EC
			}
		}
		for (size_t i = 0; i < 3; i++)
		{
			if (formTab[i].nameOfAForm != nameOfAForm)
				delete formTab[i].PTRForm;
		}
		if (form == NULL)
			throw nameOfTheFormNotFound;
	}
	catch(NameOfFormNotFound &e)
	{
		SC(REDCOLOR)
		std::cerr << "Intern can't creates " << nameOfAForm << " because " << nameOfTheFormNotFound.what() << std::endl;
		EC
	}
	return form;
}