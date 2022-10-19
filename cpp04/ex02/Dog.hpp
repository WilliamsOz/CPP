/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:54 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 13:33:26 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

	public:
	Dog( void );
	virtual ~Dog();
	Dog( const Dog &copy );
	Dog &   operator=( Dog &rhs );
	virtual void makeSound( void ) const;


	private	:
	Brain	*_brain;
};


#endif