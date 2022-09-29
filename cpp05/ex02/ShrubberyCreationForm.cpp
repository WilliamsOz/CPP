/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:06:36 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 18:52:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target )
: AForm(target, 145, 137), _target(target), _gradeRequiredToBeSigned(145), _gradeRequiredToBeExecuted(137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm & copy )
: AForm(copy._target, 145, 137), _target(copy._target), _gradeRequiredToBeSigned(145), _gradeRequiredToBeExecuted(137)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm &rhs )
{
	std::cout << "ShrubberyCreationForm Assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeRequiredToBeSigned = rhs._gradeRequiredToBeSigned;
		this->_gradeRequiredToBeExecuted = rhs._gradeRequiredToBeExecuted;
	}
	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	try
	{
		canBeExecuted( executor );
	}
	catch(const NotSignedException e)
	{
		std::cerr << REDCOLOR << this->_target << " can't be executed because " << notSigned.what() << ENDCOLOR << std::endl;
		return ;
	}
	catch(const GradeTooLowException e)
	{
		std::cerr << REDCOLOR << this->_target << " can't be executed because " << gradeTooLow.what() << ENDCOLOR << std::endl;
		return ;
	}
	std::string		target = _target + "_shrubbery";
	std::ofstream	ofs(target, std::ios::out | std::ios::trunc);

	ofs <<" 	       ,@@@@@@@," << std::endl;
	ofs <<"     ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs <<"  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	ofs <<" ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	ofs <<" %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	ofs <<" %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	ofs <<" `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	ofs <<"       |o|        | |         | |" << std::endl;
	ofs <<"       |.|        | |         | |" << std::endl;
	ofs <<"____\\\\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_";
	std::cout << GRNCOLOR << this->getName() << " has been successfully executed by " << executor.getName() << ENDCOLOR << std::endl;
	return ;
}