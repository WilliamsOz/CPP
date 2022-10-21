/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:05:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:58:55 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted)
: _name(name), _isSigned(false), _gradeRequiredToBeSigned(gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(gradeRequiredToBeExecuted)
{
	try
	{
		if (gradeRequiredToBeSigned > 150)
			throw gradeTooLow;
		else if (gradeRequiredToBeSigned < 1)
			throw gradeTooHigh;
		if (gradeRequiredToBeExecuted > 150)
			throw gradeTooLow;
		else if (gradeRequiredToBeExecuted < 1)
			throw gradeTooHigh;
	}
	catch(const GradeTooHighException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
	}
	catch (const GradeTooLowException &e)
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

Form::Form( Form const &copy )
: _name(copy._name), _isSigned(false), _gradeRequiredToBeSigned(copy._gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(copy._gradeRequiredToBeExecuted)
{
	return ;
}

Form::~Form( void )
{
	return ;
}

Form &	Form::operator=( Form const &rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

const std::string	Form::getName( void ) const
{
	return this->_name;
}

bool		Form::getIsSigned( void ) const
{
	return this->_isSigned;
}

int	Form::getGradeRequiredToBeSigned( void ) const
{
	return this->_gradeRequiredToBeSigned;
}

int	Form::getGradeRequiredToBeExecuted( void ) const
{
	return this->_gradeRequiredToBeExecuted;
}

std::ostream &	operator<<(std::ostream &o, Form &rhs )
{
	o << rhs.getName() << " :" << std::endl << "Is signed ? " << rhs.getIsSigned() << std::endl
	<< "Grade required to be signed : " << rhs.getGradeRequiredToBeSigned() << std::endl
	<< "Grade required to be executed : " << rhs.getGradeRequiredToBeExecuted() << std::endl;
	return o;
}

void		Form::beSigned( Bureaucrat &name)
{
	if (name.getGrade() > _gradeRequiredToBeSigned)
		this->_isSigned = false;
	else
		this->_isSigned = true;
}

void	Form::execute( Bureaucrat const &executor ) const
{
	try
	{
		if (this->getIsSigned() == false)
			throw	notSigned;
		if (executor.getGrade() > this->_gradeRequiredToBeExecuted)
			throw	gradeTooLow;
	}
	catch(const NotSignedException &e)
	{
		SC(REDCOLOR)
		std::cerr << executor.getName() << " couldn’t sign " << this->getName() << " because" << e.what() << std::endl;
		EC
		return ;
	}
	catch(const GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << executor.getName() << " couldn’t sign " << this->getName() << " because" << e.what() << std::endl;
		EC
		return ;
	}
	this->executeForm();
	return ;
}