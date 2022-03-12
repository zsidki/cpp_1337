#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}
std::string Zombie::get_name()
{
    return(this->name);
}

Zombie::Zombie(std::string name)
{
    std::cout<< name << "new Zombie born "<<std::endl;
}

Zombie::Zombie()
{
    std::cout << "1new Zombie born "<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<< name << "Zombie dead "<<std::endl;
}
