/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:04:18 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 15:26:09 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target )
: Form(target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm &copy )
: Form(copy.getName(), 145, 137)
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm &rhs )
{
	ShrubberyCreationForm	tmp(rhs);

	*this = tmp;
	return *this;
}

void		ShrubberyCreationForm::executeForm( void ) const
{
	const char	three[] = {
"          &&& &&  & &&\n"
"      && &\\/&\\|& ()|/ @, &&\n"
"      &\\/(/&/&||/& /_/)_&/_&\n"
"   &() &\\/&|()|/&\\/ '%\" & ()\n"
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
"&&   && & &| &| /& & % ()& /&&\n"
" ()&_---()&\\&\\|&&-&&--%---()~\n"
"     &&     \\|||\n"
"             |||\n"
"             |||\n"
"             |||\n"
"       , -=-~  .-^- _\n"
"              `\n"
};
	std::string		target = getName() + "_shrubbery";
	std::ofstream	ofs(&target[0], std::ofstream::out | std::ofstream::trunc);
	ofs << three;
	ofs << three;
	ofs << three;
	ofs << three;
	ofs << three;
	return ;
}