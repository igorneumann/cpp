/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:36:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/14 19:53:36 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

int domagic(std::string filename, std::string str1, std::string str2 )
{
	std::string line;
	std::fstream file;
	int i = -1;
	str2 = str1;

	file.open(filename, std::ifstream::in);
	if (!file)
	{
		std::cout << "Error al abrir el archivo" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		i = line.find(str1);
		if (i != -1)
		{
			std::cout << "Encontrado" << line.find(str1) << line.size() <<std::endl;
			//replace(line, str1, str2);
		}
		else
			std::cout << "No hay" << std::endl;
		//justcopy(line, filename);
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Son necesarios 3 argumentos:\n1 nombre del archivo\n"
		<< "2 string a reemplazar\n"
		<< "3 string de reemplazo" << std::endl;
		return (1);
	}
	else
	{
		return (domagic((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]));
	}
}