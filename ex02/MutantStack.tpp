/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:30:43 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/12 13:30:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

/*==============================================================================
	Constructors.
==============================================================================*/

// Default constructor
template<typename T>
MutantStack<T>::MutantStack()
{
	return ;
}

// Copy constructor
template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
	: std::stack<T>(other)
{
	return ;
}

/*==============================================================================
	Destructor
==============================================================================*/

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& other)
{
	if (this != &other)
	{
		this->c = other.c;
	}
	return (*this);
}

template<typename T>
std::ostream&	operator<<(std::ostream& os, const MutantStack<T>& obj)
{
	typename MutantStack<T>::const_iterator	it = obj.begin();
	typename MutantStack<T>::const_iterator	ite = obj.end();
	
	while (it != ite)
	{
		os << *it;
		if (it + 1 != ite)
			os << " | ";
		it++;
	}
	return (os);
}

/*==============================================================================
	Iterator methods.
==============================================================================*/


// Begin iterator
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return ((this->c.begin()));
}

// End iterator
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return ((this->c.end()));
}

// Const iterator begin
template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
	return ((this->c.begin()));
}

// Const end iterator
template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
	return ((this->c.end()));
}

#endif