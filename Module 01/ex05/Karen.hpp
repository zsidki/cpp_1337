#ifndef Karen_HPP
# define Karen_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	    Karen{

	private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

	public:
        void complain( std::string level );


};

#endif