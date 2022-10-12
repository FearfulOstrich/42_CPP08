/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:44:58 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 13:25:16 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	// Typedefs
	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator\
		const_iterator;
	
	// Constructors
	MutantStack(void);
	MutantStack(const MutantStack& other);

	// Destructors
	virtual ~MutantStack(void);

	// Assignation operator
	MutantStack<T>&	operator=(const MutantStack<T>& other);

	// Member functions
	iterator		begin(void);
	iterator		end(void);
	const_iterator	begin(void) const;
	const_iterator	end(void) const;
};

template<typename T>
std::ostream&	operator<<(std::ostream& os, const MutantStack<T>& obj);

# include "MutantStack.tpp"

#endif