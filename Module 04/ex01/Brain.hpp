#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:
    std::string ideas[100];

    private:

    public:
        Brain(void);
        Brain(const Brain &instance);
        ~Brain();
        Brain & operator = (const Brain &instance);

};

std::ostream &	operator<<( std::ostream & ostr, Brain const & instance);

#endif