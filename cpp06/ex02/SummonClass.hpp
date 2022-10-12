/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SummonClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:58:54 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 14:55:41 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUMMONCLASS_HPP
#define SUMMONCLASS_HPP

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif