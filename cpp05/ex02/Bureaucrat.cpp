/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 15:10:40 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::tryInitBureaucrat( int grade)
{
	if (grade < 1)
	{
		throw gradeTooHigh;
	}
	else if (grade > 150)
	{
		throw gradeTooLow;
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(150)
{
	try
	{
		tryInitBureaucrat(grade);
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
	catch(const GradeTooLowException e)
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

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) : _name(copy._name), _grade(copy._grade)
{
	return ;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const std::string  Bureaucrat::getName( void ) const
{
	return this->_name;
}

int   Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void  Bureaucrat::levelUp( void )
{
	try
	{
		if (this->_grade == 1)
			throw gradeTooHigh;
		this->_grade--;
		SC(GRNCOLOR)
		std::cout << this->_name << "'s rank has been successfully increase from "
		<<  this->_grade + 1 << " to " << this->_grade << std::endl;
		EC
	}
	catch (const GradeTooHighException e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
	}
	catch (const GradeTooLowException e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
	}
	return ;
}

void  Bureaucrat::levelDown( void )
{
	try
	{
		if (this->_grade == 150)
			throw gradeTooLow;
		this->_grade++;
		SC(GRNCOLOR)
		std::cout << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade - 1 << " to " << this->_grade << std::endl;
		EC
	}
	catch (GradeTooLowException e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
	}
	return ;
}

void	Bureaucrat::signForm( Form &form )
{
	if (form.getIsSigned() == true)
	{
		SC(GRNCOLOR)
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		EC
	}
	else
	{
		SC(REDCOLOR)
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because ";
	}
	return ;
}

void		Bureaucrat::tryExecuteForm( Form const &form ) const
{
	if (form.getIsSigned() == false)
		throw notSigned;
	else if (this->getGrade() > form.getGradeRequiredToBeExecuted())
		throw gradeTooLow;
	return ;
}

void		Bureaucrat::executeForm( Form const &form ) const
{
	try
	{
		tryExecuteForm(form);
	}
	catch(NotSignedException e)
	{
		std::cerr << REDCOLOR << this->_name << " couldn't execute " << form.getName() << " because " << notSigned.what() << ENDCOLOR << std::endl;
		return ;
	}
	catch(GradeTooLowException e)
	{
		std::cerr << REDCOLOR << this->_name << " couldn't execute " << form.getName() << " because " << gradeTooLow.what() << ENDCOLOR << std::endl;
		return ;		
	}
	std::cout << GRNCOLOR << this->_name << " executed " << form.getName() << ENDCOLOR << std::endl;
	form.execute(*this);
	return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
