#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance){
    *this = instance;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &instance){
    //this->Attributes = instance.attributes
    return (*this);
}