/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:50:18 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/01 15:03:57 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack(void) {};

template<class T>
MutantStack<T>::~MutantStack(void) {};

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &other)
{
	*this = other;
}

template<class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &other)
{
	(void)other;
	return (*this);
}

template<class T>
iterator	MutantStack<T>::begin(void)
{
	;
}

template<class T>
iterator	MutantStack<T>::end(void)
{
	;
}