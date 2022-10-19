/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:35:30 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:55:30 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Polymorphism.hpp"

class Cat : public Animal
{
	public:

	Cat( void );
	virtual ~Cat();
	Cat( const Cat &copy );
	Cat &   operator=( const Cat &rhs );
	virtual void makeSound( void ) const;

};

#endif