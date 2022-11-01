/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:36:25 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/29 11:12:50 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <string>

template<typename T>
typename T::iterator	easyfind(T &src, int occurence)
{
	typename	T::iterator	it;
	typename	T::iterator	begin = src.begin();
	typename	T::iterator	end = src.end();

	if (src.size() == 0)
		throw	std::invalid_argument("empty array");
	it = std::find(begin, end, occurence);
	if (it == src.end())
		throw	std::invalid_argument("can't find the occurence !");
	else
		return it;
}
