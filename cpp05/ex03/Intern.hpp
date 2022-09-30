/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:43:11 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 09:51:47 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Form;

class Intern
{
	public :
	
	/*------------------CONSTRUCTORS------------------*/
	Intern();
	Intern( Intern const &copy );
	Intern &	operator=( Intern const &rhs );

	
	/*------------------DESTRUCTOR------------------*/
	virtual ~Intern();
	

	/*------------------ACCESORS------------------*/



	/*------------------MEMBER FUNCTIONS------------------*/
	Form *	tryMakeForm( std::string nameOfAForm, std::string targetOfTheForm );
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


	private :
	
typedef struct s_Intern
{

	std::string	nameOfAForm;
	Form		*PTRForm;

}				t_formTab;

};

#endif