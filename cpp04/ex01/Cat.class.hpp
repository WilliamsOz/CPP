/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:48:18 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:22:20 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.hpp"

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