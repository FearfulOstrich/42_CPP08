/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:44:58 by antoine           #+#    #+#             */
/*   Updated: 2022/10/10 08:24:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	// Constructors
	MutantStack();
	MutantStack();

	//Destructors
	~MutantStack();

	// Iterator
	MutantStack::iterator*	
	class iterator: public std::iterator
	{
	public:
		iterator();
		~iterator();
	};	
};