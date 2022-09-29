/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:07:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 16:58:30 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{

	public :

	/*------------------CONSTRUCTORS------------------*/
	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm &copy );
	ShrubberyCreationForm & operator=( ShrubberyCreationForm &rhs );

	/*------------------DESTRUCTOR------------------*/
	virtual ~ShrubberyCreationForm();


	/*------------------MEMBER FUNCTIONS------------------*/
	virtual void		execute(Bureaucrat const & executor) const;


	private :

	std::string	_target;
	int			_gradeRequiredToBeSigned;
	int			_gradeRequiredToBeExecuted;

};

#endif