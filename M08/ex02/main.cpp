/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:25:18 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/17 18:30:08 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack); return 0;
    return 0;
}