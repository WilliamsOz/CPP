/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:59:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 16:57:52 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :

	/*------------------CONSTRUCTORS------------------*/
	void	tryInitAForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted );
	AForm( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted);
	AForm( AForm const &copy );
	AForm &	operator=( AForm const &rhs );


	/*------------------DESTRUCTOR------------------*/
	~AForm();


	/*------------------ACCESORS------------------*/
	const std::string	getName( void );
	bool				getIsSigned( void );
	int					getGradeRequiredToBeSigned( void );
	int					getGradeRequiredToBeExecuted( void );
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

std::ostream &	operator<<(std::ostream &o, AForm &rhs );

#endif