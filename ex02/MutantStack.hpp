/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:38:18 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/02 13:45:50 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<class T>
class MutantStack:
	public std::deque<T>
{
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack&);
		MutantStack	&operator=(MutantStack&);

		typedef typename std::deque<T>::iterator  iterator;
		T				&top(void);
		bool			empty(void) const;
		std::size_t		size(void) const;
		iterator		begin(void);
		iterator		end(void);
		void push(const T&);
		void pop(void);
};

#include "MutantStack.tpp"

#endif