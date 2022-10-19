/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:35:30 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 12:39:24 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

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