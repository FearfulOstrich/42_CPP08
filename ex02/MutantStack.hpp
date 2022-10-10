/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:44:58 by antoine           #+#    #+#             */
/*   Updated: 2022/10/10 17:14:35 by aalleon          ###   ########.fr       */
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
	// Constructors
	MutantStack(void);
	MutantStack(const MutantStack& other);

	// Destructors
	virtual ~MutantStack(void);

	const std::deque<T>&	getC() const;
	
	// Iterator
	class iterator: public std::iterator<std::input_iterator_tag, T>
	{
	private:
		T*	_ptr;

	public:
		// Constructor
		iterator(T* first = NULL);

		// Destructor
		virtual ~iterator();

		// assignation operator
		// iterator&	operator=(const iterator& other);

		// Getter
		T*	getPtr(void) const;
		
		// operators
		T&			operator*(void) const;
		T*			operator->(void);
		iterator&	operator++(void);
		iterator	operator++(int);
		iterator&	operator--(void);
		iterator	operator--(int);
		bool		operator!=(const iterator& other) const;
		bool		operator==(const iterator& other) const;
		
	};

	iterator	begin(void);
	iterator	end(void);
};

template<typename T>
std::ostream&	operator<<(std::ostream& os, const MutantStack<T>& obj);

# include "MutantStack.tpp"

#endif