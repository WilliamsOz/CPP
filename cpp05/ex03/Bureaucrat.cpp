/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 14:54:23 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(150)
{
	try
	{
		if (grade < 1)
			throw gradeTooHigh;
	else if (grade > 150)
		throw gradeTooLow;
	}
	catch(const GradeTooHighException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
		return ;
	}
	catch(const GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
		return ;
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy )
: _name(copy._name), _grade(copy._grade)
{
	*this = copy;
	return ;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
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
	catch (const GradeTooHighException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
	}
	catch (const GradeTooLowException &e)
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
	catch (GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
	}
	return ;
}

void	Bureaucrat::signForm( Form &form )
{
	form.beSigned(*this);
	if(form.getIsSigned() == false)
	{
		SC(REDCOLOR)
		std::cerr << this->getName() << " couldn’t sign " <<
		form.getName() << " because grade is too low !" << std::endl;
		EC
		return ;
	}
	SC(GRNCOLOR)
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
	EC
	return ;
}

void		Bureaucrat::executeForm( Form const &form ) const
{
	try
	{
		if (form.getIsSigned() == false)
			throw notSigned;
		else if (this->getGrade() > form.getGradeRequiredToBeExecuted())
			throw gradeTooLow;
	}
	catch(const NotSignedException &e)
	{
		std::cerr << REDCOLOR << this->_name << " couldn't execute " << form.getName() << " because " << notSigned.what() << ENDCOLOR << std::endl;
		return ;
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << REDCOLOR << this->_name << " couldn't execute " << form.getName() << " because " << gradeTooLow.what() << ENDCOLOR << std::endl;
		return ;		
	}
	SC(GRNCOLOR)
	std::cout << this->_name << " executed " << form.getName() << std::endl;
	EC
	form.execute(*this);
	return ;
}