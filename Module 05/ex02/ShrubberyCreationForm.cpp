#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145,137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance){
    *this = instance;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &instance){
   // this->Attributes = instance.attributes
    (void)instance;
    return (*this);
}