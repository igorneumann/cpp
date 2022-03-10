/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:42:45 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/09 19:28:14 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string.h>

void func1(int x)
{
	std::cout << "int is:" << x << std::endl;
}

void func2(char x){
	std::cout << "char is:" << x << std::endl;
}

void func3(int x)
{
	std::cout << "int is NOT:" << x + 1 << std::endl;
}

template <typename T, typename F>
void iter(T *a, int l, F f)
{
	for (int pos = 0; pos < l ; pos++)
		f(a[pos]);
}

#endif