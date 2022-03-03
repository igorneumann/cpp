/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:25:17 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/03 18:13:37 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main ( void )
{
	Data tmp;
	tmp.s1 = "Test: ";
	tmp.s2 = "De serializacion\n";
	uintptr_t	result = serialize(&tmp);
	Data		*ptr = deserialize(result);
	std::cout << "Serialized: " << result << std::endl;
	std::cout << "Deserialized: " << ptr->s1 << " || " << ptr->s2 << std::endl;
	return (0);
}