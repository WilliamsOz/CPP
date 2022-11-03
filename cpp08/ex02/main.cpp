/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/03 11:49:58 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <cstdlib>

void	listTest( void )
{
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(list);
	return ;
}

void	myTest( void )
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return ;
}

void	subjectTest( void )
{
	listTest();
	std::cout << std::endl;
	myTest();
	return ;
}

void	printMyStack( MutantStack<int> &mstack )
{
	for (MutantStack<int>::iterator it = mstack.begin() ; it != mstack.end() ; it++)
		std::cout << *it << std::endl;
	return ;
}

void	basicTest( void )
{
	MutantStack<int>	mstack;

	if (mstack.empty())
		COLOR(MAG)std::cout << "Stack is empty" << std::endl;ENDCOLOR
	for (size_t i = 0 ; i < 42 ; i++)
		mstack.push(42);
	COLOR(GRN)std::cout << "Stack size is now : " << mstack.size() << std::endl;ENDCOLOR
	printMyStack(mstack);
	MutantStack<int>	newStack;
	for (size_t i = 0 ; i < 42 ; i++)
		mstack.pop();
	if (mstack.empty())
		COLOR(MAG)std::cout << "Stack is empty" << std::endl;ENDCOLOR
	
	return ;
}

void	someOtherTest( void )
{
	MutantStack<int>	mstack;

	srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
		mstack.push(i);
	printMyStack(mstack);
	std::cout << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin() ; it != mstack.end() ; it++)
		*it = 42;
	printMyStack(mstack);
	return ;
}

int main()
{
	subjectTest();
	// basicTest();
	// someOtherTest();
	return 0;
}