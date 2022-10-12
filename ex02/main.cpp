/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:06:53 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 13:31:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << mstack << std::endl;

	mstack.push(19);
	mstack.push(24);
	mstack.push(15);
	mstack.push(0);

	std::cout << mstack << std::endl << std::endl;

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	
	++it;
	std::cout << *it << std::endl;
	--it;
	std::cout << *it << std::endl << std::endl;
	std::cout << mstack << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}

	std::stack<int>	s(mstack);
	return (0);
}
