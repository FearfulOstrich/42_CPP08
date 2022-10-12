/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:06:53 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 11:57:48 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <stdlib.h>
#include <cmath>

int main()
{
	try
	{
		Span			my_span;
		unsigned int	n;
		
		std::srand(std::time(NULL));
		std::cout << "Enter number of elements in Span: ";
		std::cin >> n;
		my_span = Span(n);
		for (unsigned int i = 0; i < my_span.getMaxN(); i++)
			my_span.addNumber(std::rand());
		if (n < 20)
			std::cout << my_span << std::endl;
		std::cout << "shortest span: " << my_span.shortestSpan();
		std::cout << std::endl;
		std::cout << "largest span: " << my_span.largestSpan();
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span			my_span;
		unsigned int	n;
		
		std::cout << "Enter number of elements in Span: ";
		std::cin >> n;
		my_span = Span(n);
		my_span.addRange(std::ceil((double)n / 2));
		my_span.addRange(n, n + n / 2);
		if (n < 20)
			std::cout << my_span << std::endl;
		std::cout << "shortest span: " << my_span.shortestSpan();
		std::cout << std::endl;
		std::cout << "largest span: " << my_span.largestSpan();
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
