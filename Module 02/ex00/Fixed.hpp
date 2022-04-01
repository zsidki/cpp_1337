#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	    Fixed{

	private:

    int _value;
    static const int _fractional_bits = 8;


	public:

    //----- Constructor & Destructor -------//
    Fixed();
    Fixed(int value);
    Fixed(const Fixed& other);
    ~Fixed();

    //----- Assignment Operator -------//
    Fixed& operator= (const Fixed& Fixed);

    //------- Setter & Getter ---------//
    void setRawBits( int const raw );
    int getRawBits( void ) const;

};

#endif