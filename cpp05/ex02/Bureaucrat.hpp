/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:26:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/24 22:36:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"
#define SC(x) std::cout<<x;
#define EC std::cout<<ENDCOLOR;

class Form;

class Bureaucrat
{
	private :

	const std::string	_name;
	int					_grade;


	public :

	/*------------------CONSTRUCTORS------------------*/
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( Bureaucrat const &copy );
	Bureaucrat &	operator=( const Bureaucrat &rhs );


	/*------------------DESTRUCTOR------------------*/
	~Bureaucrat();


	/*------------------ACCESORS------------------*/
	const std::string	getName( void ) const;
	int					getGrade( void ) const;
	void				levelUp( void );
	void				levelDown( void );


	/*------------------MEMBER FUNCTIONS------------------*/
	void				executeForm( Form const &form ) const;
	void				signForm( Form &form );


	/*------------------NESTED CLASS------------------*/
class GradeTooHighException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade too high !");
	}
};
	
class GradeTooLowException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade too low !");
	}
};
class NotSignedException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("form is not signed !");
	}
};

	GradeTooHighException	gradeTooHigh;
	GradeTooLowException	gradeTooLow;
	NotSignedException		notSigned;
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs );

#endif