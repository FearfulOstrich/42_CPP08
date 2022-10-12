/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:06:53 by antoine           #+#    #+#             */
/*   Updated: 2022/10/11 18:07:32 by antoine          ###   ########.fr       */
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

	std::cout << mstack.size() << std::endl;

	mstack.push(19);
	mstack.push(24);
	mstack.push(15);
	mstack.push(0);

	// std::cout << mstack << std::endl << std::endl;

	MutantStack<int>::iterator	it;
	MutantStack<int>::iterator	ite;
	
	it = mstack.begin();
	ite = mstack.end();
	// std::cout << &mstack << std::endl;
	// std::cout << &mstack.getC() << std::endl;
	// std::cout << &(*it) << std::endl;
	
	++it;
	std::cout << *it << std::endl;
	--it;
	std::cout << *it << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}

	std::stack<int>	s(mstack);
	return (0);
}
