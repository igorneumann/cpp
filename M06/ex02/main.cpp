/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:25:17 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/03 19:28:43 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Base::~Base ( void )
{
	std::cout << "Base destroyed" << std::endl;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type is C" << std::endl;
}

void identify(Base& p)
{

	if (dynamic_cast<A *>(&p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "Type is C" << std::endl;
}

int main ( void )
{
	Base *tmp = NULL;
 	srand (time(NULL));
	switch(rand() % 3)
	{
		case 0:
			tmp = dynamic_cast<Base *>(new A);
			break;
		case 1:
			tmp = dynamic_cast<Base *>(new B);
			break;
		case 2:
			tmp = dynamic_cast<Base *>(new C);
			break;
	}
	identify(tmp);
	identify(*tmp);
	return (0);
}