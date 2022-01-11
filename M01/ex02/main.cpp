/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:06:39 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/11 19:26:54 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

int	main(void)
{
	std::string str= "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "address is:" << &str << std::endl;
	std::cout << "address using PTR is " << stringPTR << std::endl;
	std::cout << "address using REF is " <<  &stringREF << std::endl;
	std::cout << "String using PTR is " << *stringPTR << std::endl;
	std::cout << "String using REF is " <<  stringREF << std::endl;
}