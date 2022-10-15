/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:08:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/15 11:36:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

template<typename T>
void	swap(T &x, T &y)
{
	T tmp = x;
	
	x = y;
	y = tmp;
}

template<typename T>
T const&	min(T const &x, T const &y)
{
	if (y <= x)
		return y;
	return x;
}

template<typename T>
T const&	max(T const &x, T const &y)
{
	if (y >= x)
		return y;
	return x;
}

#endif