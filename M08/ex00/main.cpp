/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:21:55 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/15 18:35:09 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( )
{
    // initialize a vector of int type
    static const int arr[] = {1, 100, 10, 70, 100};
    std::vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    // print the vector
    std::cout << "Numbers are: ";
    for(unsigned long i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) 
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
        try
    {
        std::cout << easyfind(vec, 100) << ", " << std::endl;
        std::cout << easyfind(vec, 10) << ", " << std::endl;
        std::cout << easyfind(vec, 70) << ", " << std::endl;
        std::cout << easyfind(vec, 1) << ", " << std::endl;
        std::cout << easyfind(vec, 7) << ", " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error, number not found" << std::endl;
        return -1;
    }
    return 0;
}