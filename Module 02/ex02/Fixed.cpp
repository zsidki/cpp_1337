#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0) {}

// Parametrized constructor
Fixed::Fixed(int ivalue) : _value(ivalue << _fractional_bits) {
}

// Parametrized constructor
Fixed::Fixed(float fvalue) : _value(roundf(fvalue * (1 << _fractional_bits))) {
}

// copy constructor
Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

// Default destructor
Fixed::~Fixed() {}

// assignment operator=
Fixed& Fixed::operator= (const Fixed& other)
{
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
    return (this->_value);

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
    tmp._value = other._value * _value;
    tmp._value >>= _fractional_bits;
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

//------------ A static member function max & min --------------//

Fixed& Fixed::min( Fixed& other1, Fixed& other2)
{
    if (other1 <= other2)
        return other1;
    else
        return other2;

}

Fixed& Fixed::max( Fixed&  other1, Fixed& other2)
{
    if (other1 >= other2)
        return other1 ;
    else
        return other2 ;
}

const Fixed& Fixed::min(const Fixed& other1, const Fixed& other2)
{
    if (other1 <= other2)
        return other1;
    else
        return other2;
}

const Fixed& Fixed::max(const Fixed& other1,  const Fixed& other2)
{
    if (other1 >= other2)
        return other1;
    else
        return other2 ;
}
