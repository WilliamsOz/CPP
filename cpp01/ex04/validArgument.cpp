/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validArgument.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:12:08 by wiozsert          #+#    #+#             */
/*   Updated: 2022/06/01 11:46:14 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

bool	Sed::validFile(char *fileName) const
{
	std::fstream	in_out_stream(fileName);
	std::ifstream	in_stream;

	//EXISTING FILE OR FOLDER
	in_out_stream.open(fileName);
	if (in_out_stream.is_open())
		in_out_stream.close();
	else
	{
		std::cerr << "Error" << std::endl << "File not found, or is a repository" << std::endl;
		return (false);
	}

	//READ OR WRITE PERMISSION
	in_out_stream.open(fileName, std::ios::out | std::ios::in | std::ios::app);
	if (in_out_stream.is_open())
		in_out_stream.close();
	else
	{
		std::cerr << "Error" << std::endl << "Missing read or write permission" << std::endl;
		return (false);
	}

	//EMPTY FILE
	in_stream.open(fileName, std::ios::in | std::ios::app);
	if (in_stream.peek() == std::ifstream::traits_type::eof())
	{
		in_stream.close();
		std::cerr << "Error" << std::endl << "File is empty !" << std::endl;
		return (false);
	}
	else
		in_stream.close();
	return (true);
}

bool	Sed::validArguments(char *fileName) const
{
	if (validFile(fileName) == false)
		return (false);
	return (true);
}
