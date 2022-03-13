#include "HumanA.hpp"

HumanA::HumanA(std::string name)
{
    std::cout << "HumaaanA"<<name << std::endl;
}
HumanA::~HumanA()
{

}

HumanA *humanA( std::string name)
{	
	HumanA*		humanA = new HumanA(name);
	//std::cout << zombie << std::endl;
	return humanA;
}