/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:43:06 by aalleon           #+#    #+#             */
/*   Updated: 2022/11/03 16:01:53 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
	{
		std::vector< int >	vector;
		
		vector.push_back(1);
		vector.push_back(2);
		vector.push_back(3);
		vector.push_back(4);
		vector.push_back(5);
		try
		{
			easyfind< std::vector< int > >(vector, 2);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::vector< int > >(vector, 4);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::vector< int > >(vector, 6);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::list< int >	list;

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		list.push_back(4);
		list.push_back(5);
		try
		{
			easyfind< std::list< int > >(list, 2);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::list< int > >(list, 4);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::list< int > >(list, 6);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::deque< int >	deque;

		deque.push_back(1);
		deque.push_back(2);
		deque.push_back(3);
		deque.push_back(4);
		deque.push_back(5);
		try
		{
			easyfind< std::deque< int > >(deque, 2);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::deque< int > >(deque, 4);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			easyfind< std::deque< int > >(deque, 6);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	return (0);
}