/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 10:54:59 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::tryInitBureaucrat( int grade)
{
	if (grade < 1)
	{
		throw _exception.gradeTooHighException;
	}
	else if (grade > 150)
	{
		throw _exception.gradeTooLowException;
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(150)
{
	try
	{
		tryInitBureaucrat(grade);
	}
	catch(const Exception::GradeTooHighException _e)
	{
		std::cout << REDCOLOR << _exception.gradeTooHighException.what()<< ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	catch(const Exception::GradeTooLowException _e)
	{
		std::cout << REDCOLOR << _exception.gradeTooLowException.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const std::string  Bureaucrat::getName( void )
{
	return this->_name;
}

int   Bureaucrat::getGrade( void )
{
	return this->_grade;
}

void  Bureaucrat::levelUp( void )
{
	try
	{
		if (this->_grade == 1)
			throw _exception.gradeTooHighException;
		this->_grade--;
		std::cout << GRNCOLOR << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade + 1 << " to " << this->_grade << ENDCOLOR << std::endl;
	}
	catch (Exception::GradeTooHighException gradeTooHighException)
	{
		std::cout << REDCOLOR << _exception.gradeTooHighException.what() << ENDCOLOR << std::endl;
	}
	catch ( Exception _exception )
	{
		std::cout << REDCOLOR << _exception.what() << ENDCOLOR << std::endl;
		exit (EXIT_FAILURE);
	}
	return ;
}

void  Bureaucrat::levelDown( void )
{
	try
	{
		if (this->_grade == 150)
			throw _exception.gradeTooLowException;
    	this->_grade++;
		std::cout << GRNCOLOR << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade - 1 << " to " << this->_grade << ENDCOLOR << std::endl;
	}
	catch (Exception::GradeTooLowException &gradeTooLowException)
	{
		std::cout << REDCOLOR << _exception.gradeTooLowException.what() << ENDCOLOR << std::endl;
	}
	catch ( Exception _exception )
	{
		std::cout << REDCOLOR << _exception.what() << ENDCOLOR << std::endl;
		exit (EXIT_FAILURE);
	}
	return ;
    return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
