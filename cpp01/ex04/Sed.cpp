/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:57:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 12:36:39 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed( void )
{

	return ;
}

Sed::~Sed( void )
{

	return ;
}

bool	validFile(char *fileName)
{
	std::fstream	in_out_stream(fileName);
	std::ifstream	in_stream;

	//EXISTING FILE OR FOLDER
	in_out_stream.open(fileName, std::ios::app);
	if (in_out_stream.is_open())
		in_out_stream.close();
	else
	{
		std::cerr << "Error" << std::endl << "Argument may be a folder or the file is not found !" << std::endl;
		return (false);
	}

	//READ OR WRITE PERMISSION
	in_out_stream.open(fileName, std::ios::out | std::ios::in | std::ios::app);
	if (in_out_stream.is_open())
		in_out_stream.close();
	else
	{
		std::cerr << "Error" << std::endl << "Missing read or write permission !" << std::endl;
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

bool	Sed::validArguments(char *fileName)
{
	if (validFile(fileName) == false)
		return (false);
	return (true);
}