#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
# define NUMBER_OF_ANIMALS 10


int		ft_main()
{
	std::cout << " ------------- Create Animals ------------ " << std::endl;

    Animal *animals[NUMBER_OF_ANIMALS]; // Number of animals = 10
    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
        if(i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << " ------------- Delete animals ------------ " << std::endl;
    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
        delete animals[i];
    
    std::cout << " ------------- Create 2 Cats & 2 Dogs ------------ " << std::endl;

    Cat cat1, cat2;
    Brain*	brain1 = cat1.getBrain();
    Brain*	brain2 = cat2.getBrain();
    brain1->_ideas[0] = "Its time to eat Emm";
    brain1->_ideas[1] = "Its time to eat Emm ";
    brain2->_ideas[0] = "Baby Cat Yeah lets go to restaurant 1337 ! ";
    brain2->_ideas[1] = "Baby Cat Yeah lets go to restaurant 1337 !";

    Dog dog1, dog2;
    Brain   *brain_dog1 = dog1.getBrain();
    Brain   *brain_dog2 = dog2.getBrain();
    brain_dog1->_ideas[0] = "I'm Husky";
    brain_dog2->_ideas[1] = "I'm Pitbull ";
	brain_dog2->_ideas[0] = "I'm baby Husky";
    brain_dog2->_ideas[1] = "I'm baby Pitbull ";

    std::cout << " ------------- Get Ideas ------------ " << std::endl;

    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat2.getType() << " 1: " << cat2.getBrain()->_ideas[1] << std::endl;

    std::cout << dog1.getType() << " 0: " << dog1.getBrain()->_ideas[0] << std::endl;
    std::cout << dog2.getType() << " 1: " << dog2.getBrain()->_ideas[1] << std::endl;

    std::cout << "\n------------- Assignement animal to animal ------------ " << std::endl;
	
	cat1 = cat2;
	dog1 = dog2;

    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[1] << std::endl;

    std::cout  << cat2.getType() << " 1: " << cat2.getBrain()->_ideas[0] << std::endl;
    std::cout  << cat2.getType() << " 1: " << cat2.getBrain()->_ideas[1] << std::endl;

    std::cout << dog1.getType() << " 0: " << dog1.getBrain()->_ideas[0] << std::endl;
    std::cout << dog1.getType() << " 0: " << dog1.getBrain()->_ideas[1] << std::endl;

	std::cout  << dog2.getType() << " 1: " << dog2.getBrain()->_ideas[0] << std::endl;
    std::cout  << dog2.getType() << " 1: " << dog2.getBrain()->_ideas[1] << std::endl;    

    std::cout << " ------------- Delete cats & dogs ------------ " << std::endl;
	return 0;
}

int main()
{
	ft_main();
	while(1);
	return 0;
}


