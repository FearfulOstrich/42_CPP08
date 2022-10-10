/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:30:43 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/10 17:16:20 by aalleon          ###   ########.fr       */
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

// Destructor
template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template<typename T>
const std::deque<T>&	MutantStack<T>::getC() const
{
	return (this->c);
}

/*==============================================================================
	Iterator methods.
==============================================================================*/


// Begin iterator
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (&(*this->c.begin()));
}

// End iterator
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (&(*this->c.end()));
}

/*==============================================================================
	Iterator Constructor.
==============================================================================*/

template<typename T>
MutantStack<T>::iterator::iterator(T* first)
	: _ptr(first)
{
	return ;
}

/*==============================================================================
	Iterator Destructor.
==============================================================================*/

template<typename T>
MutantStack<T>::iterator::~iterator()
{
	return ;
}

/*==============================================================================
	Iterator getter.
==============================================================================*/

template<typename T>
T*	MutantStack<T>::iterator::getPtr(void) const
{
	return (_ptr);
}

/*==============================================================================
	Iterator operator overloads.
==============================================================================*/

// Pre-increment
template<typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator++()
{
	_ptr++;
	return (*this);
}

// Post-increment
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int)
{
	MutantStack<T>::iterator retval;
	
	retval = *this;
	++_ptr;
	return (retval);
}

// Pre-decrement
template<typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator--()
{
	_ptr--;
	return (*this);
}

// Post-decrement
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int)
{
	MutantStack<T>::iterator retval;
	
	retval = *this;
	--_ptr;
	return (retval);
}

// equal operator
template<typename T>
bool	MutantStack<T>::iterator::operator==(const MutantStack<T>::iterator&\
																other) const
{
	return (_ptr == other.getPtr());
}

// different operator
template<typename T>
bool	MutantStack<T>::iterator::operator!=(const MutantStack<T>::iterator&\
																other) const
{
	return (_ptr != other.getPtr());
}

// dereferencement operator
template<typename T>
T&	MutantStack<T>::iterator::operator*(void) const
{
	return (*_ptr);
}

// reference operator
template<typename T>
T*	MutantStack<T>::iterator::operator->(void)
{
	return (_ptr);
}

template<typename T>
std::ostream&	operator<<(std::ostream& os, const MutantStack<T>& obj)
{
	typename MutantStack<T>::iterator	it;
	typename MutantStack<T>::iterator	ite;
	
	it = obj.begin();
	ite = obj.end();
	while (it != ite)
	{
		os << *it;
		if (it + 1 != ite)
			os << " | ";
		it++;
	}
	os << std::endl;
}

#endif