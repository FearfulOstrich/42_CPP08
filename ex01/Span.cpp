/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:30:54 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 11:58:12 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Span::Span(void)
	:_maxN(0)
	, _array(std::vector<int>())
{
	return ;
}

Span::Span(unsigned int n)
	: _maxN(n)
	, _array(std::vector<int>())
{
	if (n == 0)
		throw (Span::NotEnoughElementsException());
	return ;
}

Span::Span(const Span& other)
	: _maxN(other.getMaxN())
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Span::~Span(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_maxN = other.getMaxN();
		_array = other.getArray();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Span& obj)
{
	for (std::vector<int>::const_iterator it = obj.getArray().begin();\
		it != obj.getArray().end();  it++)
	{
		os << *it;
		if (it + 1 != obj.getArray().end())
			os << " | ";
	}
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

unsigned int		Span::getMaxN(void) const
{
	return (_maxN);
}

const std::vector<int>&	Span::getArray(void) const
{
	return (_array);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	Span::addNumber(int x)
{
	if (_array.size()  == _maxN)
		throw (Span::SpanFullException());
	_array.push_back(x);
	return ;
}

void	Span::addRange(unsigned int n)
{
	if (_array.size() + n > _maxN)
		throw (Span::SpanFullException());
	for (unsigned int i = 0 ; i < n; i++)
		_array.push_back(i);
	return ;
}

void	Span::addRange(int start, int end)
{
	if (_array.size() + std::abs(end - start) > _maxN)
		throw (Span::SpanFullException());
	for (int i = 0 ; i < std::abs(end - start); end > start ? i++ : i--)
		_array.push_back(start + i);
	return ;
}

int	Span::shortestSpan(void) const
{
	std::vector<int>	copy(_array);

	if (_array.size() < 2)
		throw (Span::NotEnoughElementsException());
	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), copy.begin());
	return (*std::min_element(copy.begin() + 1, copy.end()));
}

int	Span::largestSpan(void) const
{
	if (_array.size() < 2)
		throw (Span::NotEnoughElementsException());
	return (*std::max_element(_array.begin(), _array.end()));
}

/*==============================================================================
	Exceptions.
==============================================================================*/

const char*	Span::SpanFullException::what() const throw()
{
	return ("Span has reached max nmber of elements");
}

const char*	Span::NotEnoughElementsException::what() const throw()
{
	return ("not enough elements in span");
}