/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:06:28 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/30 14:12:35 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iostream>

int	main(int ac , char **av)
{
	std::vector<int>	v;
	std::deque<int>		d;
	std::list<int>		l;
	const int			imin = 5;
	const int			imax = 10;
	int					tofind;

	std::cout << "container(s) int:";
	for (int i = imin; i < imax; i++)
	{
		std::cout << i << ",";
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
	std::cout << std::endl;
	if (2 == ac)
		tofind = atoi(av[1]);
	else
		tofind = imin;
	std::cout << "tofind:" << tofind << "\tchange with '" << av[0] << " [tofind]'" << std::endl;
	std::cout << "-------Easy find-------" << std::endl;
	try
	{
		::easyfind(v, tofind);
		std::cout << "OK vector" << std::endl;
		::easyfind(d, tofind);
	}
	catch(const std::exception& e)
	{
		std::cout << "KO v" << std::endl;
	}
	try
	{
		::easyfind(d, tofind);
		std::cout << "OK deque" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "KO d" << std::endl;
	}
	try
	{
		::easyfind(l, tofind);
		std::cout << "OK list" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "KO l" << std::endl;
	}
}
