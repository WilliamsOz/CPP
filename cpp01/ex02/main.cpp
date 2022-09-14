/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:00:58 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 12:34:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "\033[1;35mThe memory address of attribut string is : " << "|" << &string << "|" << std::endl;
	std::cout << "The memory address of attribut stringPTR is : " << "|" << stringPTR << "|" << std::endl;
	std::cout << "The memory address of attribut stringREF is : " << "|" << &stringREF << "|" "\033[1;32m" << std::endl << std::endl;

	std::cout << "\033[1;32mThe value of the attribut string is : " << "|" << string << "|" << std::endl;
	std::cout << "The value pointed by stringPTR is : " << "|" << *stringPTR << "|" << std::endl;
	std::cout << "The value pointed by stringREF is : " << "|" << stringREF << "|" << "\033[1;32m" << std::endl;

	return (0);
}