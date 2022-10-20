/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:42:54 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 09:05:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include "Polymorphism.hpp"

class Animal
{
	public :

	Animal( void );
	Animal( const Animal &copy );
	virtual ~Animal( void );
	Animal &			operator=( Animal &rhs );
	const std::string &	getType( void ) const;
	virtual void 		makeSound( void ) const;


	protected :

	std::string type;

};

std::ostream &	operator<<( std::ostream &o, Animal const &rhs );

#endif