/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:27:34 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/10 18:49:58 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"


int main( void )
{
	Array<int> test(30);
	Array<char> test2(14);
	char arr[14] = "Hola que tal?";

	for (int i = 0; i < 14 ; i++)
	{
		test2[i] = arr[i];
	}
	srand(time(NULL));
	for (int i = 0; i < 30 ; i++)
	{
		const int value = rand();
		test[i] = value;
	}

	Array<int> test3(test);
	Array<char> test4(test2);

	for (int i = 0; i < 14 ; i++)
	{
		if (test2[i] != test4[i])
			std::cout << "ERROR copia es distinta" << std::endl;
	}
	for (int i = 0; i < 30 ; i++)
	{
		if (test[i] != test3[i])
			std::cout << "ERROR copia es distinta" << std::endl;
	}
	test[10] = 80;
	test2[10] = 80;
	test3[10] = 50;
	test4[10] = 50;
	if ( test[10] == test3[10] || test2[10] == test4[10] )
		std::cout << "ERROR valores no cambian por separado" << std::endl;

	std::cout << "Intentando acceder a indice inexistente" << std::endl;
try
	{
		test[50] = 10;
	}
catch (std::exception & e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	return 0;
}