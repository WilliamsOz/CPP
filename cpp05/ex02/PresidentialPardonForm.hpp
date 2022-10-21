/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:30:32 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:16:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{

	public :

	/*------------------CONSTRUCTORS------------------*/
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( PresidentialPardonForm &copy );
	PresidentialPardonForm & operator=( PresidentialPardonForm &rhs );

	/*------------------DESTRUCTOR------------------*/
	virtual ~PresidentialPardonForm();


	/*------------------MEMBER FUNCTIONS------------------*/
	void		executeForm( void ) const;
};

#endif