/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:52:09 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 08:32:02 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>

class Span
{
private:
	unsigned int		_maxN;
	std::vector<int>	_array;

protected:

public:
	// Constructors
	Span(void);
	Span(unsigned int n);
	Span(const Span& other);

	// Destructors
	virtual ~Span();

	// Operator overload
	Span&	operator=(const Span& other);

	// Accessors (getters should return by value or const-reference)
	unsigned int			getMaxN(void) const;
	const std::vector<int>&	getArray(void) const;

	// Member functions
	void	addNumber(int x);
	void	addRange(unsigned int n);
	void	addRange(int start, int end);
	int		shortestSpan(void) const;
	int		largestSpan(void) const;

	// Exceptions
	class SpanFullException: public std::exception
	{
	public:
		const char*	what() const throw();
	};
	class NotEnoughElementsException: public std::exception
	{
	public:
		const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Span& obj);

#endif
