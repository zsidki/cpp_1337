#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

    public:
        std::string _ideas[100];
        Brain(void);
        Brain(const Brain &brain);
        ~Brain();
        Brain & operator = (const Brain &brain);

};

//std::ostream &	operator<<( std::ostream & ostr, Brain const & instance);

#endif
