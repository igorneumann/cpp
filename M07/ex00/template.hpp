/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:08:37 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/14 18:58:38 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

#include <iostream>
#include <stdlib.h>

template <typename T>
	T max(T x, T y)
	{
		return (x > y)? x: y;
	}

template <typename T>
	T min(T x, T y)
	{
		return (x < y)? x: y;
	}

template <typename T>
	void swap(T & x, T & y)
	{
		T temp;

		temp = y;
		y = x;
		x = temp;
}

#endif