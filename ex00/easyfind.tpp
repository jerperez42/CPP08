/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:01:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/30 14:09:35 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template < class T >
void easyfind(T container, int tofind)
{
	if (container.end() == std::find(container.begin(), container.end(), tofind))
		throw std::exception();
}
