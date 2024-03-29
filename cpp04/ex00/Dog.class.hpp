/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:54 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:55:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Polymorphism.hpp"

class Dog : public Animal
{

	public:
	Dog( void );
	virtual ~Dog();
	Dog( const Dog &copy );
	Dog &   operator=( Dog &rhs );
	virtual void makeSound( void ) const;

};


#endif