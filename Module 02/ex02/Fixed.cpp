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
Fixed::~Fixed() {}

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

//------------- comparison operators --------------//

bool Fixed::operator> (const Fixed& other) const
{
    return(this->_value > other._value);
}

bool Fixed::operator <(const Fixed& other) const
{
    return(this->_value < other._value);
}

bool Fixed::operator >=(const Fixed& other) const
{
    return(this->_value >= other._value);
}

bool Fixed::operator <=(const Fixed& other) const
{
    return(this->_value <= other._value);
}

bool Fixed::operator ==(const Fixed& other) const
{
    return(this->_value == other._value);
}

bool Fixed::operator !=(const Fixed& other) const
{
    return(this->_value != other._value);

}

//------------- arithmetic operators --------------//

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed tmp;
    tmp.setRawBits(other.getRawBits() + this->getRawBits());
    return tmp;

}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed tmp;
    tmp.setRawBits(other.getRawBits() - this->getRawBits());
    return tmp;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed tmp;
    tmp.setRawBits(other.getRawBits() * this->getRawBits());
    return tmp;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed tmp;
    tmp.setRawBits(other.getRawBits() / this->getRawBits());
    return tmp;
}


//---------- Increment/decrement operators -----------//

Fixed& Fixed::operator++()
{
    ++(this->_value);
    return *this;
}

Fixed& Fixed::operator--()
{
    --(this->_value);
    return *this;
}

Fixed Fixed::operator++(int)
{
   Fixed temp = *this;
   ++*this;
   return temp;
}

Fixed Fixed::operator--(int)
{
   Fixed temp = *this;
   --*this;
   return temp;
}

//------------ A static member function --------------//

Fixed& min( Fixed& other1, Fixed& other2)
{
    if (other1 <= other2)
        return other1;
    else
        return other2;

}

Fixed& max( Fixed& other1, Fixed& other2)
{
    if (other1 >= other2)
        return other1;
    else
        return other2;
}

const Fixed& mix(Fixed const& other1, Fixed const& other2)
{
    if (other1 <= other2)
        return other1;
    else
        return other2;
}

const Fixed& max(Fixed const& other1, Fixed const& other2)
{
    if (other1 >= other2)
        return other1;
    else
        return other2;
}