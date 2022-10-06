#include "Span.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Span::Span(unsigned int n)
	: _maxN(n)
{
	std::cout << "Span Default Constructor called." << std::endl;
	return ;
}

Span::Span(const Span& other)
	: _maxN(other.getMaxN())
{
	std::cout << "Span Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Span::~Span(void)
{
	std::cout << "Span Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Span&	Span::operator=(const Span& other)
{
	std::cout << "Span assignment operator called." << std::endl;
	if (this != &other)
	{
		_array = other.getArray();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Span& obj)
{
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

const Array<int>&	Span::getArray(void) const
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
	_array.insert(x);
	return ;
}

int	shortestSpan(void)
{
	std::vector<int>	copy = _array;
	std::vector<int>	diff(copy.size() - 1);

	if (_array.size() < 2)
		throw (Span::NotEnoughElementsException());
	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), diff.begin());
	return (std::min_element(diff.begin(), diff.end()));
}

int	largestSpan(void)
{
	if (_array.size() < 2)
		throw (Span::NotEnoughElementsException());
	return (std::max_element(_array.begin(), _array.end()));
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