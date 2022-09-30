/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 10:44:53 by wiozsert         ###   ########.fr       */
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
		std::cerr << REDCOLOR << gradeTooHigh.what()<< ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
	}
	catch(const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << gradeTooLow.what() << ENDCOLOR << std::endl;
		std::cout << YELCOLOR << "By default the grade will be 150" << ENDCOLOR << std::endl;
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
			throw gradeTooHigh;
		this->_grade--;
		std::cout << GRNCOLOR << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade + 1 << " to " << this->_grade << ENDCOLOR << std::endl;
	}
	catch (const GradeTooHighException e)
	{
		std::cerr << REDCOLOR << gradeTooHigh.what() << ENDCOLOR << std::endl;
	}
	catch (const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << gradeTooLow.what() << ENDCOLOR << std::endl;
		exit (EXIT_FAILURE);
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
		std::cout << GRNCOLOR << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade - 1 << " to " << this->_grade << ENDCOLOR << std::endl;
	}
	catch (GradeTooLowException e)
	{
		std::cerr << REDCOLOR << gradeTooLow.what() << ENDCOLOR << std::endl;
	}
    return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
