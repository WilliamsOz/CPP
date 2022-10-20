/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:05:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 13:17:49 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Form::tryInitForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted )
{
	if (gradeRequiredToBeSigned > 150)
		throw gradeTooLow;
	else if (gradeRequiredToBeSigned < 1)
		throw gradeTooHigh;
	if (gradeRequiredToBeExecuted > 150)
		throw gradeTooLow;
	else if (gradeRequiredToBeExecuted < 1)
		throw gradeTooHigh;
	return ;
}

Form::Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted)
: _name(name), _isSigned(false), _gradeRequiredToBeSigned(gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(gradeRequiredToBeExecuted)
{
	try
	{
		tryInitForm(gradeRequiredToBeSigned, gradeRequiredToBeExecuted);
	}
	catch(const GradeTooHighException e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
	}
	catch (const GradeTooLowException e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
	}
	return ;
}

Form::~Form( void )
{
	return ;
}

Form::Form( Form const &copy )
: _name(copy._name), _isSigned(false), _gradeRequiredToBeSigned(copy._gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(copy._gradeRequiredToBeExecuted)
{
	return ;
}

Form &	Form::operator=( Form const &rhs )
{
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return *this;
}

const std::string	Form::getName( void )
{
	return this->_name;
}

bool		Form::getIsSigned( void )
{
	return this->_isSigned;
}

int	Form::getGradeRequiredToBeSigned( void )
{
	return this->_gradeRequiredToBeSigned;
}

int	Form::getGradeRequiredToBeExecuted( void )
{
	return this->_gradeRequiredToBeExecuted;
}

std::ostream &	operator<<(std::ostream &o, Form &rhs )
{
	SC(CYANCOLOR)
	o << rhs.getName() << " :" << std::endl << "Is signed ? " << rhs.getIsSigned() << std::endl
	<< "Grade required to be signed : " << rhs.getGradeRequiredToBeSigned() << std::endl
	<< "Grade required to be executed : " << rhs.getGradeRequiredToBeExecuted() << std::endl;
	EC
	return o;
}

void		Form::tryToSign( Bureaucrat &name )
{
	if (name.getGrade() > _gradeRequiredToBeSigned)
		throw gradeTooLow;
	else
		this->_isSigned = true;
	name.signForm(*this);
}

void		Form::beSigned( Bureaucrat &name)
{
	try
	{
		tryToSign(name);
	}
	catch (const GradeTooLowException e)
	{
		name.signForm(*this);
		std::cout << gradeTooLow.what() << ENDCOLOR << std::endl;
		EC
	}
	return ;
}

