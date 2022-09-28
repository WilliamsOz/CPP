/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:05:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 13:38:04 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Form::tryInitForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted )
{
	if (gradeRequiredToBeSigned > 150)
		throw _exception.gradeTooLowException;
	else if (gradeRequiredToBeSigned < 1)
		throw _exception.gradeTooHighException;
	if (gradeRequiredToBeExecuted > 150)
		throw _exception.gradeTooLowException;
	else if (gradeRequiredToBeExecuted < 1)
		throw _exception.gradeTooHighException;
	return ;
}

Form::Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted)
: _name(name), _isSigned(false), _gradeRequiredToBeSigned(gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(gradeRequiredToBeExecuted)
{
	try
	{
		tryInitForm(gradeRequiredToBeSigned, gradeRequiredToBeExecuted);
	}
	catch(const Exception::GradeTooHighException)
	{
		std::cout << REDCOLOR << _exception.gradeTooHighException.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	catch (const Exception::GradeTooLowException)
	{
		std::cout << REDCOLOR << _exception.gradeTooLowException.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::~Form( void )
{
	std::cout << "Form default destructor called" << std::endl;
	return ;
}

Form::Form( Form const &copy )
: _name(copy._name), _isSigned(false), _gradeRequiredToBeSigned(copy._gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(copy._gradeRequiredToBeExecuted)
{
	std::cout << "Form copy constructor called" << std::endl;
	return ;
}

Form &	Form::operator=( Form const &rhs )
{
	std::cout << "Form assignement operator called" << std::endl;
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
	o << CYANCOLOR << rhs.getName() << " :" << std::endl
	<< "Is signed ? " << rhs.getIsSigned() << std::endl
	<< "Grade required to be signed : " << rhs.getGradeRequiredToBeSigned() << std::endl
	<< "Grade required to be executed : " << rhs.getGradeRequiredToBeExecuted() << ENDCOLOR << std::endl;
	return o;
}

void		Form::tryToSign( Bureaucrat &name )
{
	if (name.getGrade() > _gradeRequiredToBeSigned)
		throw _exception.gradeTooLowException;
	else
	{
		this->_isSigned = true;
	}
	name.signForm(*this);
}

void		Form::beSigned( Bureaucrat &name)
{
	try
	{
		tryToSign(name);
	}
	catch (const Exception::GradeTooLowException)
	{
		name.signForm(*this);
		std::cout << _exception.gradeTooLowException.what() << ENDCOLOR << std::endl;
	}
	return ;
}

