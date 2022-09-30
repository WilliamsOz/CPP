/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:21:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 10:38:43 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
: Form(target, 72, 45), _target(target), _gradeRequiredToBeSigned(72), _gradeRequiredToBeExecuted(42)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm & copy )
: Form(copy._target, 72, 45), _target(copy._target), _gradeRequiredToBeSigned(72), _gradeRequiredToBeExecuted(45)
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeRequiredToBeSigned = rhs._gradeRequiredToBeSigned;
		this->_gradeRequiredToBeExecuted = rhs._gradeRequiredToBeExecuted;
	}
	return *this;
}

void	RobotomyRequestForm::tryToRobotomize( int *ptr_success ) const
{
	std::cout << YELCOLOR << "... ... ...Drilling noise... ... ..." << ENDCOLOR << std::endl;
	if (*ptr_success % 2 == 1)
	{
		*ptr_success = 2;
		throw cantBeRobotomized;
		return ;
	}
	std::cout << GRNCOLOR << this->_target << " has been successfully robotomized, it has a 50% chance of working" << ENDCOLOR << std::endl;
	*ptr_success = 1;
	return ;
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	static int success = 2;
	
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
	try
	{
		tryToRobotomize(&success);
	}
	catch(const CantBeRobotomized e)
	{
		std::cerr << REDCOLOR << this->_target << " can't be executed because " << cantBeRobotomized.what() << ENDCOLOR << std::endl;
		return ;
	}
	return ;
}
