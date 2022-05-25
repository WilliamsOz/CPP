/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileNameErrors.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:30:59 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/25 15:45:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

bool	fileNameErrors(char *fileName)
{
	std::ifstream	output(fileName);

	if (output.is_open() == FALSE)
		std::cout << "Coucou" << std::endl;
	return (FALSE);
}
