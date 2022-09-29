/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:05:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 18:48:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	AForm::tryInitAForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted )
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

AForm::AForm( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted)
: _name(name), _isSigned(false), _gradeRequiredToBeSigned(gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(gradeRequiredToBeExecuted)
{
	try
	{
		tryInitAForm(gradeRequiredToBeSigned, gradeRequiredToBeExecuted);
	}
	catch(const GradeTooHighException e)
	{
		std::cerr << REDCOLOR << gradeTooHigh.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	catch (const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << gradeTooLow.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::~AForm( void )
{
	std::cout << "AForm default destructor called" << std::endl;
	return ;
}

AForm::AForm( AForm const &copy )
: _name(copy._name), _isSigned(false), _gradeRequiredToBeSigned(copy._gradeRequiredToBeSigned), _gradeRequiredToBeExecuted(copy._gradeRequiredToBeExecuted)
{
	std::cout << "AForm copy constructor called" << std::endl;
	return ;
}

AForm &	AForm::operator=( AForm const &rhs )
{
	std::cout << "AForm assignement operator called" << std::endl;
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return *this;
}

const std::string	AForm::getName( void ) const
{
	return this->_name;
}

void		AForm::setSigned( void )
{
	this->_isSigned = true;
	return ;
}

bool		AForm::getIsSigned( void ) const
{
	return this->_isSigned;
}

int	AForm::getGradeRequiredToBeSigned( void ) const
{
	return this->_gradeRequiredToBeSigned;
}

int	AForm::getGradeRequiredToBeExecuted( void ) const
{
	return this->_gradeRequiredToBeExecuted;
}

std::ostream &	operator<<(std::ostream &o, AForm &rhs )
{
	o << CYANCOLOR << rhs.getName() << " :" << std::endl
	<< "Is signed ? " << rhs.getIsSigned() << std::endl
	<< "Grade required to be signed : " << rhs.getGradeRequiredToBeSigned() << std::endl
	<< "Grade required to be executed : " << rhs.getGradeRequiredToBeExecuted() << ENDCOLOR << std::endl;
	return o;
}

void		AForm::tryToSign( Bureaucrat &name )
{
	if (name.getGrade() > _gradeRequiredToBeSigned)
		throw gradeTooLow;
	else if (this->getIsSigned() == true)
		throw alreadySigned;
}

void		AForm::beSigned( Bureaucrat &name)
{
	try
	{
		tryToSign(name);
	}
	catch (const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << name.getName() << " couldn’t sign " << this->getName() << " because " << gradeTooLow.what() << ENDCOLOR << std::endl;
		return ;
	}
	catch(const AlreadySigned e)
	{
		std::cerr << REDCOLOR << name.getName() << " couldn’t sign " << this->getName() << " because " << alreadySigned.what() << ENDCOLOR << std::endl;
		return ;
	}
	this->_isSigned = true;
	std::cout << GRNCOLOR << name.getName() << " signed " << this->getName() << ENDCOLOR << std::endl;
	return ;
}

void			AForm::canBeExecuted( Bureaucrat const &executor ) const
{
	if (this->_isSigned == false)
	{
		throw notSigned;
	}
	else if (executor.getGrade() > _gradeRequiredToBeExecuted)
	{
		throw gradeTooLow;
	}
}