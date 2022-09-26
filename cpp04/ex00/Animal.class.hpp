/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:59:39 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:27:39 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include "Animal.hpp"

class Animal
{
	public :

	Animal( void );
	Animal( const Animal &copy );
	virtual ~Animal( void );
	Animal &    operator=( Animal &rhs );
	const std::string &	getType( void ) const;
	virtual void makeSound( void ) const;


	protected :

	std::string type;

};

std::ostream &	operator<<( std::ostream &o, Animal const &rhs );

#endif