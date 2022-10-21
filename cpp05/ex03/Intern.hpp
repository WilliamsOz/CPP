/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:07:07 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:20:03 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Form;

class Intern
{
	private	:

typedef struct s_Intern
{

	std::string	nameOfAForm;
	Form		*PTRForm;

}				t_formTab;


	public :
	
	/*------------------CONSTRUCTORS------------------*/
	Intern();
	Intern( Intern const &copy );
	Intern &	operator=( Intern const &rhs );


	/*------------------DESTRUCTOR------------------*/
	~Intern();


	/*------------------MEMBER FUNCTIONS------------------*/
	Form *	makeForm( std::string nameOfAForm, std::string targetOfTheForm );


	/*------------------NESTED CLASS------------------*/
class NameOfFormNotFound : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("name of the form is not found !");
	}
};

	NameOfFormNotFound	nameOfTheFormNotFound;
};
#endif