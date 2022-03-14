#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T                *array;
        unsigned int    _size;

    public:
        Array<T>( void ) : array(NULL), _size(0)
        {
        }
        
        Array<T>(unsigned int n) : array(new T[n]), _size(n)
        {            
            for (unsigned int i = 0; i < n; i++)
                this->array[i] = 42;
        }
        
        Array<T>(Array<T> const & array) : array(new T[array._size]), _size(array._size)
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->array[i] = T(array.array[i]);
        }

        ~Array<T>()
        {
            delete [] this->array;
        }

        Array<T>&    operator=(Array<T> const & arry)
        {
            if (this->_size > 0)
                delete [] this->array;
            
            this->_size = arry.size();
            this->array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
                this->array[i] = arry[i];

            return (*this);
        }

        T            &operator[](unsigned int const index) const
        {
            if (index >= this->_size || index < 0)
                throw std::overflow_error("Index out of limits");
            return (this->array[index]);
        }

        unsigned int    size(void) const
        {
            return (this->_size);
        }
};

#endif