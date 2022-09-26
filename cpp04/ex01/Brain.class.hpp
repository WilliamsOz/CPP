/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:38:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 17:43:58 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include "Animal.hpp"

class Brain
{
	public :

	Brain( void );
	virtual ~Brain( void );
	Brain( const Brain &copy );
	Brain &		operator=( const Brain &rhs );
	std::string	_ideas[100];

};

#endif