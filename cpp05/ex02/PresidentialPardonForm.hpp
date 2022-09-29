/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:22:51 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 17:57:45 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	public :

	PresidentialPardonForm( AForm form );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm &copy );
	PresidentialPardonForm & operator=( PresidentialPardonForm &rhs );


	private :

	std::string			_target;
	int			_gradeRequiredToBeSigned;
	int			_gradeRequiredToBeExecuted;

};

#endif