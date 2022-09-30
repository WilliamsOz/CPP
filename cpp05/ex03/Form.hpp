/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:59:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 09:51:43 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

	/*------------------CONSTRUCTORS------------------*/
	void	tryInitForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted );
	Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted);
	Form( Form const &copy );
	Form &	operator=( Form const &rhs );


	/*------------------DESTRUCTOR------------------*/
	virtual ~Form();


	/*------------------ACCESORS------------------*/
	const std::string	getName( void ) const;
	bool				getIsSigned( void ) const;
	int					getGradeRequiredToBeSigned( void ) const;
	int					getGradeRequiredToBeExecuted( void ) const;
	void				setSigned( void );


	/*------------------MEMBER FUNCTIONS------------------*/
	void				tryToSign( Bureaucrat &name );
	void				beSigned( Bureaucrat &name );
	virtual void		execute(Bureaucrat const &executor) const = 0;
	void				canBeExecuted( Bureaucrat const &executor ) const;


	/*------------------NESTED CLASS------------------*/
class GradeTooHighException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade is too high !");
	}
};
	
class GradeTooLowException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade is too low !");
	}
};

class AlreadySigned : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("form is already signed !");
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

class CantBeRobotomized : public std::exception
{
	public :	
	virtual  const char *	what() const throw()
	{
		return ("robotomy failed");
	}
};

	GradeTooHighException   gradeTooHigh;
	GradeTooLowException    gradeTooLow;
	NotSignedException		notSigned;
	AlreadySigned			alreadySigned;
	CantBeRobotomized		cantBeRobotomized;

	private :

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeRequiredToBeSigned;
	const int			_gradeRequiredToBeExecuted;
};

std::ostream &	operator<<(std::ostream &o, Form &rhs );

#endif