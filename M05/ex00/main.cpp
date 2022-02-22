/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:35 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/22 18:37:56 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
try
	{
	std::cout << "Creating DAMN bureaucrat:" << std::endl;
	Bureaucrat test("Igor", 50);
	Bureaucrat copy(test);

	std::cout << "Checking original:" << std::endl;
	std::cout << test << std::endl;
	std::cout << "Checking copy:" << std::endl;
	std::cout << test << std::endl;
	std::cout << "Increasing his rank:" << std::endl;
	test += 10;
	std::cout << test << std::endl;
	std::cout << "Decreasing his rank:" << std::endl;
	test -= 20;
	std::cout << test << std::endl;
	std::cout << "Increasing over the limit:" << std::endl;
	test -= 200;
	std::cout << test << std::endl;
	}
catch (std::exception & e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	return 0;
}