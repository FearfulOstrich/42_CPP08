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
	(void)obj;
	os << "something";
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

int	Span::shortestSpan(void) const
{
	std::vector<int>	copy(_array);
	// std::vector<int>	diff(_array.size() - 1);

	if (_array.size() < 2)
		throw (Span::NotEnoughElementsException());
	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), copy.begin());
	return (*std::min_element(copy.begin() + 1, copy.end()));
	// return (*std::min_element(diff.begin(), std::prev(diff.end())));
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