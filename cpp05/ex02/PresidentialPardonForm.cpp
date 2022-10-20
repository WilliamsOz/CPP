/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:23:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 15:14:07 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string target )
: Form(target, 25, 5), _target(target), _gradeRequiredToBeSigned(25), _gradeRequiredToBeExecuted(5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm & copy )
: Form(copy._target, 25, 5), _target(copy._target), _gradeRequiredToBeSigned(25), _gradeRequiredToBeExecuted(5)
{
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeRequiredToBeSigned = rhs._gradeRequiredToBeSigned;
		this->_gradeRequiredToBeExecuted = rhs._gradeRequiredToBeExecuted;
	}
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	try
	{
		canBeExecuted( executor );
	}
	catch(const NotSignedException e)
	{
		std::cerr << REDCOLOR << this->_target << " can't be executed because " << notSigned.what() << ENDCOLOR << std::endl;
		return ;
	}
	catch(const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << this->_target << " can't be executed because " << gradeTooLow.what() << ENDCOLOR << std::endl;
		return ;
	}
	std::cout << GRNCOLOR << this->_target << " has been pardoned by Zaphod Beeblebrox" << ENDCOLOR << std::endl;
	return ;
}