#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int		_maxN;
	std::vector<int>	_array;

protected:

public:
	// Constructors
	Span(unsigned int n);
	Span(const Span& other);

	// Destructors
	virtual ~Span();

	// Operator overload
	Span&	operator=(const Span& other);

	// Accessors (getters should return by value or const-reference)
	unsigned int		getMaxN(void) const;
	const Array<int>&	getArray(void) const;

	// Member functions
	void	addNumber(int x);
	int		shortestSpan(void) const;
	int		largestSpan(void) const;

	// Exceptions
	class SpanFullException: std::exception
	{
	public:
		const char*	what() const throw();
	};
	class NotEnoughElementsException: std::exception
	{
	public:
		const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Span& obj);

#endif
