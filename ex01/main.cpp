/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:39:27 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/01 14:30:47 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main(void)
{
	std::cout << std::endl << "-----42-----" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "-----addNumber 42k-----" << std::endl;
	{
		Span sp = Span(42000);
		for (int i = 0; i < 42000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "-----addNumber span error-----" << std::endl;
	{
		int	n = 5;

		Span sp = Span(n);
		std::cout << "span=" << n << std::endl;
		try
		{
			for (int i = 0; i < 2 * n; i++)
			{
				sp.addNumber(i);
				std::cout << "added:" << i << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----shortestSpan error-----" << std::endl;
	{
		int	n = 5;

		Span sp = Span(n);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----longestSpan error-----" << std::endl;
	{
		int	n = 5;

		Span sp = Span(n);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
