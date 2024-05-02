/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:36:44 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/02 13:51:32 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <list>
#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl << "------42 MutantStack------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		std::cout << mstack.empty() << "(ADDED TEST)" << std::endl; // ADDED TEST
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
	}
	std::cout << std::endl << "------42 list------" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << *(++mstack.begin()) << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		std::cout << mstack.empty() << "(ADDED TEST)" << std::endl; // ADDED TEST
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		//std::stack<int> s(mstack);
	}
	std::cout << std::endl << "------=------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(1);
		mstack.push(2);
		std::cout << std::endl << "original" << std::endl;
		MutantStack<int>::iterator ite3 = mstack.end();
		for (MutantStack<int>::iterator it = mstack.begin(); it != ite3; ++it)
			std::cout << *it << std::endl;
		MutantStack<int> copy(mstack);
		std::cout << std::endl << "*copy*" << std::endl;
		mstack.push(3);
		std::cout << std::endl << "*original gets modified*" << std::endl;
		std::cout << std::endl << "copy" << std::endl;
		MutantStack<int>::iterator ite = copy.end();
		for (MutantStack<int>::iterator it = copy.begin(); it != ite; ++it)
			std::cout << *it << std::endl;
	
		std::cout << std::endl << "original (modified)" << std::endl;
		MutantStack<int>::iterator ite2 = mstack.end();
		for (MutantStack<int>::iterator it = mstack.begin(); it != ite2; ++it)
			std::cout << *it << std::endl;
	}
	return 0;
}
