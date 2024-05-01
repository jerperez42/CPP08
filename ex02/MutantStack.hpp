/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:38:18 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/01 15:03:08 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<class T>
class MutantStack:
	public std::stack<T> 
{
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack&);
		MutantStack	&operator=(const MutantStack&);

		typedef __gnu_cxx::__normal_iterator<T *, std::vector<T>> iterator;
		iterator	begin(void);
		iterator	end(void);
};

#include "MutantStack.tpp"

#endif