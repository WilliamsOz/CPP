/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 17:10:58 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	Willy("Willy", 5);
	PresidentialPardonForm		pr("Macron");
	// ShrubberyCreationForm	sc("home");
	// RobotomyRequestForm		rb("Drilling robot");

	pr.beSigned(Willy);
	pr.execute(Willy);
	// sc.beSigned(Willy);
	// sc.beSigned(Willy);
	// Willy.signForm(sc);
	// Willy.signForm(sc);
	// sc.execute(Willy);
	// rb.beSigned(Willy);
	// rb.execute(Willy);
	// rb.execute(Willy);
	// rb.execute(Willy);
	// rb.execute(Willy);
	// sc.execute(Willy);
	return (0);
}