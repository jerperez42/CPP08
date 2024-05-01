/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:57:18 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/01 14:25:16 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm> 
#include <exception> 
#include <vector>
#include <climits>

Span::Span(void) : _n(0)
{
	std::vector<int>	l;
	this->_numbers = l;
}

Span::~Span(void) {};

Span::Span(const Span& other) : _n(other._n)
{
	std::vector<int>	l;

	l.reserve(this->_n);
	this->_numbers = l;
}

Span &Span::operator=(const Span& other)
{
	if (this->_n != other._n)
		throw std::exception();
	this->_numbers = other._numbers;
	return (*this);
}

Span::Span(unsigned int N) : _n(N)
{
	std::vector<int>	l;

	l.reserve(N);
	this->_numbers = l;
}

void	Span::addNumber(int i)
{
	if (this->_numbers.size() < this->_n)
		this->_numbers.push_back(i);
	else
		throw std::exception();
}

unsigned int	Span::shortestSpan(void)
{
	if (2 > this->_numbers.size())
		throw std::exception();

	std::vector<int>::iterator	itb = this->_numbers.begin();
	std::vector<int>::iterator	ite = this->_numbers.end();
	unsigned int				i0;
	unsigned int				i1;
	unsigned int				span;
	unsigned int				spani;

	span = UINT_MAX;
	std::sort(this->_numbers.begin(), this->_numbers.end());
	i0 = *itb;
	for (std::vector<int>::iterator iti = itb + 1; iti != ite; iti++)
	{
		i1 = *iti;
		spani = (i1 - i0);
		if (spani < span)
			span = spani;
		i0 = i1;
	}
	return (span);
}

unsigned int	Span::longestSpan(void)
{
	std::vector<int>::iterator itb = this->_numbers.begin();
	std::vector<int>::iterator ite = this->_numbers.end();

	std::vector<int>::iterator min = std::min_element(itb, ite);
	if (ite == min)
		throw std::exception();
	std::vector<int>::iterator max = std::max_element(itb, ite);
	return (*max - *min);
}
