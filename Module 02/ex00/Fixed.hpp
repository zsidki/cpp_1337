#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	    Fixed{

	private:

    int integer;
    static const int integer;


	public:

    Fixed(int integer);
    Fixed(const Fixed& copy_constructor);
    ~Fixed();
    Fixed& operator= (const Fixed& Fixed);
    void setRawBits( int const raw );
    int getRawBits( void ) const;

};

#endif