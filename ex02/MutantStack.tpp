/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:50:18 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/02 13:45:36 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>
#include <exception>

#include <iostream>

template<class T>
MutantStack<T>::MutantStack(void) {};

template<class T>
MutantStack<T>::~MutantStack(void) {};

template<class T>
MutantStack<T>::MutantStack(MutantStack<T> &other)
{
	*this = other;
}

template<class T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> &other)
{
	if (this != &other)
	{
		this->deque::clear();
		typename MutantStack<T>::iterator ite = other.end();

		for (typename MutantStack<T>::iterator it = other.begin();
				it != ite;
				++it)
			this->push(*it);
	}
	return (*this);
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->deque::begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->deque::end());
}

template<class T>
void	MutantStack<T>::push(const T& value)
{
	this->deque::push_back(value);
}

template<class T>
void	MutantStack<T>::pop(void)
{
	this->deque::pop_back();
}

template<class T>
T	&MutantStack<T>::top(void)
{
	if (0 == this->deque::size())
		throw std::exception();
	return (*(--this->deque::end()));
}


template<class T>
std::size_t		MutantStack<T>::size(void) const
{
	return (this->deque::size());
}

template<class T>
bool		MutantStack<T>::empty(void) const
{
	return (this->deque::empty());
}


// template<class T>
// typename MutantStack<T>::iterator	MutantStack<T>::end(void)
// {
// 	return (0);
// }



// void pop();