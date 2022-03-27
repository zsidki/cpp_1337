#ifndef WRONGAnimal_HPP
# define WRONGAnimal_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std:: string _type;


public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &instance);
    ~WrongAnimal();

    WrongAnimal & operator = (const WrongAnimal &instance);

    void	setType(std::string type);
	std::string		getType(void) const;

	void makeSound() const ;

};

#endif