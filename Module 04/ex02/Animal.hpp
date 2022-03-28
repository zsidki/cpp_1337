#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std:: string _type;


public:
    Animal(void);
    Animal(const Animal &instance);
    virtual ~Animal();
    Animal & operator = (const Animal &instance);
    void	setType(std::string type);
	std::string		getType(void) const;
	virtual void makeSound() const = 0;

};

//std::ostream &	operator<<( std::ostream & ostr, Animal const & instance);

#endif