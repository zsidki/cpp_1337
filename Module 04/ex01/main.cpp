#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

# define NUMBER_OF_ANIMALS 10

// int main()
// {
//     int a;
//     // const Animal* d = new Dog();
//     // const Animal* c = new Cat();
//     Animal animal[100];

//     while (a < 20)
//     {
//         if(a % 2)
//             animal[a] = Cat();
//         else 
//             animal[a] = Dog();
//         a++;
//     }

//     // delete j;//should not create a leak
//     // delete i;

//     return 0;
// }

int main()
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
    for (int i = 0; i < 10; i++)
        delete animals[i];
    
    std::cout << " ------------- Create 2 Cats & 2 Dogs ------------ " << std::endl;

    Cat cat1, cat2;
    Brain   *brain = cat1.getBrain();
    brain->_ideas[0] = "Its time to eat Emm";
    brain->_ideas[1] = "Yeah lets go to restaurant 1337 !";

    Dog dog1, dog2;
    Brain   *brain_dog = dog1.getBrain();
    brain_dog->_ideas[0] = "I'm Husky";
    brain_dog->_ideas[1] = "I'm Pitbull ";

    std::cout << " ------------- Get Ideas ------------ " << std::endl;

    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat2.getType() << " 1: " << cat2.getBrain()->_ideas[1] << std::endl;

    std::cout << dog1.getType() << " 0: " << dog1.getBrain()->_ideas[0] << std::endl;
    std::cout << dog2.getType() << " 1: " << dog2.getBrain()->_ideas[1] << std::endl;
    std::cout << " ------------- Assignement animal to animal ------------ " << std::endl;
    cat1 = cat2;
    dog1 = dog2;


    std::cout << cat1.getType() << " 0: " << cat1.getBrain()->_ideas[0] << std::endl;
    std::cout << cat2.getType() << " 1: " << cat2.getBrain()->_ideas[1] << std::endl;

    std::cout << dog1.getType() << " 0: " << dog1.getBrain()->_ideas[0] << std::endl;
    std::cout << dog2.getType() << " 1: " << dog2.getBrain()->_ideas[1] << std::endl;    

    std::cout << " ------------- Delete cats ------------ " << std::endl;
    return (0);
}


