/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:36:25 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 13:14:48 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator	easyfind(T &src, int nb)
{
	typename T::iterator	it;

	it = src.begin();
	while (it != src.end())
	{
		if (*it == nb)
			return it;
		it++;
	}
	throw std::invalid_argument("can't find the occurence !");
}
