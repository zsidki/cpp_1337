#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Parametrized constructor
Fixed::Fixed(int value) : _value(value) {}

// copy constructor
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// assignment operator
Fixed& Fixed::operator= (const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other.getRawBits();
    return (*this);
}

// setter
void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

// getter
int Fixed::getRawBits() const
{
    std::cout<< "getRawBits member function called"<< std::endl;
    return (this->_value);
    std::cout<< this->_value<< std::endl;

}
