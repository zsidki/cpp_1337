#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T> 
    class Array // template definition
    {
        private:
            T *_array;
            unsigned int _size;

            

        public:

            //----- Constructor & Destructor -------//
            Array(void) : _array(new T[0]), _size(0) {};

            Array(unsigned int n) : _size(n) 
            {  
                this->_array = new T[n];
            };

            Array(const Array& array) : _array(new T[array._size]), _size(array._size)
            {
                *this = array;
            }

            ~Array()
            {
                delete[] this->_array;
            }
            
            //copy contents of array in other array
            Array& operator=(const Array& array)
            {
                for(unsigned int i = 0; i < array._size && i < this->_size; i++)
                    this->_array[i] = array._array[i];
                return *this;
            }

            //subscript operator: [ ]
            T& operator[](unsigned int index)
            {
                if(index >= this->_size)
                    throw OutOfBoundsException();
                return (this->_array[index]);
            }
            const T& operator[](unsigned int index) const
            {
                if(index >= this->_size)
                    throw OutOfBoundsException();
                return (this->_array[index]);
            }

            unsigned int size() const 
            {
                return this->_size;
            }

            class OutOfBoundsException : public std::exception
            {   public:
                    virtual const char* what() const  throw()
                    {
                        return ("Out Of Bounds Exception");
                    }
            };

    }; 

#endif
