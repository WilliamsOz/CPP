/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validArgument.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:12:08 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 18:32:39 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

static bool	isDirectory(char *fileName)
{
	struct stat s;

	if (stat(fileName, &s) == 0)
	{
		if (s.st_mode & S_IFDIR)
		{
			std::cerr << REDCOLOR << "Error, file must not be a repository" << ENDCOLOR << std::endl;
			return (true);
		}
	}
	return (false);
}

static bool	notFound(char *fileName)
{
	struct stat	s;

	if (stat(fileName, &s) != 0)
	{
		std::cerr << REDCOLOR << "Error, file not found" << ENDCOLOR << std::endl;
		return (true);
	}
	return (false);
}

static bool	missingPermission(char *fileName)
{
	std::fstream	in_out_stream;

	in_out_stream.open(fileName, std::fstream::out | std::fstream::in);
	if (in_out_stream.is_open())
		in_out_stream.close();
	else
	{
		std::cerr << REDCOLOR << "Error, missing file access permission" << ENDCOLOR << std::endl;
		return (true);
	}
	return (false);
}

static bool	emptyFile(char *fileName)
{
	std::ifstream	in_stream;

	in_stream.open(fileName, std::ios::in);
	if (in_stream.peek() == std::ifstream::traits_type::eof())
	{
		in_stream.close();
		std::cerr << REDCOLOR << "Error, empty file" << ENDCOLOR << std::endl;
		return (true);
	}
	else
		in_stream.close();
	return (false);
}

static bool isSymlink(char *fileName)
{
	int	fd;

	fd = open(fileName, O_NOFOLLOW);
	if (fd != -1)
		return (false);
	else
	{
		std::cerr << REDCOLOR << "Error, file is a symlink" << ENDCOLOR << std::endl;
		close(fd);
	}
	return (true);
}

bool	Sed::validFile(char *fileName) const
{
	if (isDirectory(fileName) == true)
		return (false);
	else if (notFound(fileName) == true)
		return (false);
	else if (missingPermission(fileName) == true)
		return (false);
	else if (emptyFile(fileName) == true)
		return (false);
	else if (isSymlink(fileName) == true)
		return (false);
	return (true);
}

bool	Sed::validArguments(char *fileName) const
{
	if (validFile(fileName) == false)
		return (false);
	return (true);
}
