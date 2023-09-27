/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:32:48 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 07:32:49 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(1);
		sp.addNumber(25);
		sp.addNumber(9);
		sp.addNumber(15);
		sp.display();
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const Span::SpanIsFull &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp(5);
		sp.addNumber(5);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const Span::SpanIsFull &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Span::NotEnoughNumbers &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp(5);
		std::vector<int> v;

		v.push_back(5);
		v.push_back(1);
		v.push_back(25);
		v.push_back(9);
		sp.addNumber(5);
		sp.addNumbers(v.begin(), v.end());
		sp.display();
	}
	catch(const Span::SpanIsFull &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}