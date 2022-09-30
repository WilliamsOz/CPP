/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:22:51 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/30 08:52:29 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public :

	/*------------------CONSTRUCTORS------------------*/
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( PresidentialPardonForm &copy );
	PresidentialPardonForm & operator=( PresidentialPardonForm &rhs );


	/*------------------DESTRUCTOR------------------*/
	virtual ~PresidentialPardonForm( void );


	/*------------------MEMBER FUNCTIONS------------------*/
	virtual void		execute(Bureaucrat const & executor) const;


	private :

	std::string			_target;
	int			_gradeRequiredToBeSigned;
	int			_gradeRequiredToBeExecuted;

};

#endif