/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:37:06 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/16 18:23:33 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        // std::cout << sp.shortestSpan() << std::endl;
        sp.addNumber(5);
        // std::cout << sp.shortestSpan() << std::endl;
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.print();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
    	std::cerr << e.what() << '\n';
    }
    	try
	{
        Span sp1 = Span(10000);
        srand(time(NULL));
        for (int i = 0; i < 10000; i++)
                sp1.addNumber(rand());
    //    sp1.print();
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}