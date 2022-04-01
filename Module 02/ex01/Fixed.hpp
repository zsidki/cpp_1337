#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	    Fixed{

	private:

    int _value;
    static const int _fractional_bits = 8;


	public:

    Fixed();                    // Default constructor
    Fixed(int ivalue);          // Parametrized constructor take int
    Fixed(float fvalue);		// Parametrized constructor take float
	Fixed(const Fixed& other);  // Copy constructor
    ~Fixed();                   // Default destructor


    Fixed& operator= (const Fixed& Fixed);	// assignment operator =

    void setRawBits( int const raw ); 		// Setter
    int getRawBits( void ) const;			// getter

	float toFloat( void ) const;			// converts value fixed-point to floating-point
	int toInt( void ) const;				// converts value fixed-point to integer

};

std::ostream& operator<< ( std::ostream& os, const Fixed& c ); // Operator overload << 

#endif