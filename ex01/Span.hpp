/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:19:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/05/01 14:26:36 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception> 

class Span
{
	private:
		std::vector<int>	_numbers;
		const unsigned int	_n;
	public:
		Span(void);
		~Span(void);
		Span(const Span&);
		Span &operator=(const Span&);
		Span(unsigned int);
		void					addNumber(int);
		unsigned int			shortestSpan(void);
		unsigned int			longestSpan(void);
		template<class T> void	addRange(T container) {
			if ((2 > this->_numbers.size())
					|| (this->_numbers.size() + container.size() > this->_n))
				throw std::exception();
			this->_numbers.insert(this->_numbers.end(), container.begin(), container.end());
		}

};

#endif