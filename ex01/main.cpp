/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:06:53 by antoine           #+#    #+#             */
/*   Updated: 2022/10/12 08:49:35 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <stdlib.h>

int main()
{
	unsigned int	n;
	Span			my_span;
	
	std::srand(std::time(NULL));
	try
	{
		std::cout << "Enter number of elements in Span: ";
		std::cin >> n;
		my_span = Span(n);
		for (unsigned int i = 0; i < my_span.getMaxN(); i++)
			my_span.addNumber(std::rand());
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
		std::cout << "Enter number of elements in Span: ";
		std::cin >> n;
		my_span = Span(n);
		std::cout << my_span;
		my_span.addRange(n / 2);
		my_span.addRange(n, n + n / 2);
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
