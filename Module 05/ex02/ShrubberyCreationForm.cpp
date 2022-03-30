#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("unknown"), Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance)
{
    *this = instance;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("ShrubberyCreationForm", 145,137){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &instance){
    this->_target = instance.getTarget();
    //(void)instance;
    return (*this);
}

const std::string ShrubberyCreationForm::getTarget() const
{
    return(this->_target);
}

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & shrubbery)
{
    std::cout << shrubbery.getName() << shrubbery.getGrade();
    return ostr;
}

void    ShrubberyCreationForm::execute( Bureaucrat const & execute) const
{
    std::string file;
    if(!(this->getSignGrade()))
        throw FormNotSignedException(this->getName());
    else if (execute.getGrade() > this->getGradExecute())
        throw GradeTooLowException();
    else
        std::ofstream file(this->_target);
    file<<"                                                 "
        <<"                     ,                           "
        <<"                    dM                           "   
        <<"                   MMr                           "   
        <<"                  4MMML                  .       "       
        <<"                  MMMMM.                xf       "       
        <<"  .              \M6MMM               .MM-       "       
        <<"   Mh..          +MM5MMM            .MMMM        "       
        <<"   .MMM.         .MMMMML.          MMMMMh        "       
        <<"    )MMMh.        MM5MMM         MMMMMMM         "   
        <<"     3MMMMx.     \MMM3MMf      xnMMMMMM\         "   
        <<"     \*MMMMM      MMMMMM.     nMMMMMMP\          "       
        <<"       *MMMMMx    \MMM5M\    .MMMMMMM=           "   
        <<"        *MMMMMh   \MMMMM\   JMMMMMMP             "   
        <<"          MMMMMM   GMMMM.  dMMMMMM            .  "   
        <<"           MMMMMM  \MMMM  .MMMMM(        .nnM\\  "   
        <<"..          *MMMMx  MMM\  dMMMM\    .nnMMMMM*    "   
        <<" \MMn...     \MMMMr \MM   MMM\   .nMMMMMMMM\     "   
        <<"  \4MMMMnn..   *MMM  MM  MMP\  .dMMMMMMM\\       "       
        <<"    ^MMMMMMMMx.  *ML \M .M*  .MMMMMM**\          "   
        <<"       *PMMMMMMhn. *x > M  .MMMM**\\             "   
        <<"          \\**MMMMhx/.h/ .=*\                    "   
        <<"                   333.\%.333                    "          
        <<"                   \     \                       "   
        // ------------------------------------------------ //
        << std::endl;