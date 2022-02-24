/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:35 by ineumann          #+#    #+#             */
/*   Updated: 2022/02/24 17:48:14 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	std::cout << copy << std::endl;
	std::cout << "Increasing his rank:" << std::endl;
	test += 10;
	std::cout << test << std::endl;
	std::cout << "Decreasing his rank:" << std::endl;
	test -= 20;
	std::cout << test << std::endl;
//	std::cout << "Increasing over the limit:" << std::endl;
//	test -= 200;

	std::cout << "Creating DAMN form:" << std::endl;
	PresidentialPardonForm PPformi("Igor");
	PresidentialPardonForm PPformicp(PPformi);
	RobotomyRequestForm RRformi("Pepito");
	RobotomyRequestForm RRformicp(RRformi);
	ShrubberyCreationForm SCformi("Miki");
	ShrubberyCreationForm SCformicp(SCformi);

	std::cout << "\nChecking original form:" << std::endl;
	std::cout << PPformi << std::endl;
	std::cout << "\nChecking copy form:" << std::endl;
	std::cout << PPformicp << std::endl;
	std::cout << "\nChecking original form:" << std::endl;
	std::cout << RRformi << std::endl;
	std::cout << "\nChecking copy form:" << std::endl;
	std::cout << RRformicp << std::endl;
	std::cout << "\nChecking original form:" << std::endl;
	std::cout << SCformi << std::endl;
	std::cout << "\nChecking copy form:" << std::endl;
	std::cout << SCformicp << std::endl;

	std::cout << test << std::endl;
	std::cout << SCformi << std::endl;

	std::cout << "\nTrying to sign with enough permits:" << std::endl;
	test.signForm(SCformi);
	std::cout << "\nTrying to sign already signed form:" << std::endl;
	test.signForm(SCformi);
	std::cout << "\nTrying to run with enough permits:" << std::endl;
	test.executeForm(SCformi);
	std::cout << "\nDecreasing rank below needed:" << std::endl;
	test -= 85;
	std::cout << "\nChecking result:" << std::endl;
	std::cout << test << std::endl;
	std::cout << "\nTrying to sign copy without enough permits:" << std::endl;
	test.signForm(SCformicp);
	std::cout << "\nTrying to run copy without enough permits:" << std::endl;
	test.executeForm(SCformicp);

	}
catch (std::exception & e)
	{
		std::cout << "\nEXCEPTION: " << e.what() << std::endl;
	}
	return 0;
}