#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Parametrized constructor
Fixed::Fixed(int ivalue) : _value(ivalue) {
    std::cout<<"Int constructor called"<<std::endl;
     this->_value = ivalue * (1 << _fractional_bits);
}

// Parametrized constructor
Fixed::Fixed(float fvalue) : _value(fvalue) {
    std::cout<<"Float constructor called"<<std::endl;
    this->_value = roundf(fvalue * (1 << _fractional_bits));

}

// copy constructor
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Default destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// assignment operator=
Fixed& Fixed::operator= (const Fixed& other)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->_value = other._value;
    return (*this); 
}

// assignment operator
std::ostream& operator<<( std::ostream& os, const Fixed& c )
{
    os << c.toFloat();
    return os;
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

// converts value fixed-point to floating-point
float Fixed::toFloat( void ) const
{
    return ((float)this->_value / (float)(1 << _fractional_bits));
}

// converts value fixed-point to Int
int Fixed::toInt( void ) const
{
    return (this->_value / (1 << _fractional_bits));
}