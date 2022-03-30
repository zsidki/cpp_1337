#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance){
    *this = instance;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &instance){
    //this->Attributes = instance.attributes
    return (*this);
}