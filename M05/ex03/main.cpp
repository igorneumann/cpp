/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:11:35 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/01 19:30:00 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
try
	{
	std::cout << "Creating DAMN bureaucrat:" << std::endl;
	Bureaucrat test("Igor", 50);
	Bureaucrat copy(test);
	Bureaucrat copy2 = test;

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

	std::cout << "Creating one of those poor interns:" << std::endl;
	Intern someRandomIntern;

	std::cout << "Trying to clone them:" << std::endl;
	Intern someRandomInterncopy(someRandomIntern);
	Intern someRandomInterncopy2 = someRandomIntern;

	std::cout << "Making poor interns create DAMN forms:" << std::endl;
	Form* rrf;
	Form* rrf1;
	Form* rrf2;
	rrf = someRandomIntern.makeForm("presidential pardon", "Igor");
	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf2 = someRandomIntern.makeForm("shrubbery creation", "Miki");

	std::cout << "Trying to fool interns into creating WRONG forms:" << std::endl;
	Form* rrf3;
	rrf3 = someRandomIntern.makeForm("cat on a keyboard, IN SPACE!", "Dog");

	std::cout << "Creating DAMN forms:" << std::endl;
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