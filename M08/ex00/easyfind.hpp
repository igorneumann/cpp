/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:22:00 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/15 18:37:28 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <vector>

class notfoundException : public std::exception 
{
	public:
		notfoundException(int pos);
		~notfoundException() throw();
		const char* what() const throw();
		private:
		int pos;
};

notfoundException::notfoundException ( int pos ) { this->pos = pos; }

notfoundException::~notfoundException(void) throw () { }

const char* notfoundException::what() const throw ()
{
	std::string msg = "Value " + std::to_string(this->pos) + " not found.";
	const char* data = msg.data();
    std::cout << data << std::endl;
	return data;
}

template <typename T>
int easyfind(T & cont, int j)
{
    for(unsigned long i = 0; i < (sizeof(cont) / sizeof(cont[0])); i++) 
    {
        if (cont[i] == j)
            return cont[i];
    } 
    throw notfoundException(j);
    return -1;
}

#endif