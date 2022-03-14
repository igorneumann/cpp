/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:27:05 by ineumann          #+#    #+#             */
/*   Updated: 2022/03/14 19:10:29 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

class Awesome
{
	public:
		Awesome( ) {}
		Awesome( int n ): _n( n) {}
		Awesome & operator = (const Awesome &Awesome) 
		{
			if (this != &Awesome)
				this->_n = Awesome.getn();
			return (*this);
		}
		bool operator == ( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator != ( Awesome const & rhs ) const { return (this->_n != rhs._n); }
		bool operator > ( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator < ( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator <= ( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator >= ( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int getn( void ) const { return (this->_n);	}
		
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &out, const Awesome &value)
{
	out << value.getn();
	return (out);
}


int main( void ) 
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	Awesome e(2), f(4);

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;

	return 0;
}