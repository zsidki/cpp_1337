
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int     ft_main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    //************* WrongAnimal *******************//
    const WrongAnimal* w_meta = new WrongAnimal();
    const WrongAnimal* w = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    w_meta->makeSound();
    w->makeSound();
    delete i;
    delete j;
    delete w;
    delete w_meta;
    delete meta;
return 0;
}



int main()
{

    ft_main();
    //while(1);

    return 0;

}
