/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:00:26 by aalleon           #+#    #+#             */
/*   Updated: 2022/11/03 16:01:15 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <algorithm>
# include <iostream>

template< typename T >
void	easyfind(T& container, int x)
{
	typename T::const_iterator	it;
	
	it = find(container.begin(), container.end(), x);
	if (it == container.end())
		throw (std::exception());
	std::cout << "found element." << std::endl;
	return ;
}

#endif