/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:36:22 by ineumann          #+#    #+#             */
/*   Updated: 2022/01/20 19:27:01 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

int domagic(const char* filename, std::string str1, std::string str2 )
{
	std::string line;
	std::string append = ".replace";
    std::string newfile = filename + append;
	std::fstream file;
	std::fstream fileout;
	int i = -1;
	int times = 0;

	file.open(filename, std::ifstream::in);
	if( !file ) { 
      std::cerr << "Error al abrir archivo: " << filename << std::endl;
      exit(1);
   	}
	fileout.open(newfile, std::ifstream::out);
	if (!fileout)
	{
		std::cerr << "Error al crear archivo temporal" << std::endl;
		exit(1);
	}
	while (std::getline(file, line))
	{
		i = line.find(str1);
		if (i != -1)
		{
		times++;
		while ((i = line.find(str1)) != - 1)
			line.replace(i, str1.size(), str2);
		}
		fileout << line << std::endl;
	}
	if (times == 0)
		std::cout << "No hay" << std::endl;
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
		return (domagic((const char*)argv[1], (std::string)argv[2], (std::string)argv[3]));
	}
}