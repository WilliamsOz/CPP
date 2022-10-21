/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:03:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 15:15:37 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{

	public :

	/*------------------CONSTRUCTORS------------------*/
	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm &copy );
	ShrubberyCreationForm & operator=( ShrubberyCreationForm &rhs );

	/*------------------DESTRUCTOR------------------*/
	virtual ~ShrubberyCreationForm();


	/*------------------MEMBER FUNCTIONS------------------*/
	void		executeForm( void ) const;
};

#endif