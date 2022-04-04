#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  Form("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("unknown")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : 
Form("ShrubberyCreationForm", 145, 137), _target(form.getTarget()) 
{
    *this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &instance)
{
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
    std::cout << shrubbery.getName() << "  ==> " << " Grade "<<  shrubbery.getGrade();
    return ostr;
}

void    ShrubberyCreationForm::execute( Bureaucrat const & execute) const
{
    //std::string file;
    if(!(this->getSignGrade()))
        throw FormNotSignedException(this->getName());
    else if (execute.getGrade() > this->getGradExecute())
        throw GradeTooLowException();
    else
    {
        std::ofstream file(this->_target);
    file<<"                                                 \n"
        <<"                     ,                           \n"
        <<"                    dM                           \n"   
        <<"                   MMr                           \n"   
        <<"                  4MMML                  .       \n"       
        <<"                  MMMMM.                xf       \n"       
        <<"  .              -M6MMM               .MM-       \n"       
        <<"   Mh..          +MM5MMM            .MMMM        \n"       
        <<"   .MMM.         .MMMMML.          MMMMMh        \n"       
        <<"    )MMMh.        MM5MMM         MMMMMMM         \n"   
        <<"     3MMMMx.     -MMM3MMf      xnMMMMMM*         \n"   
        <<"     -*MMMMM      MMMMMM*     nMMMMMMP*          \n"       
        <<"       *MMMMMx    -MMM5M.    .MMMMMMM=           \n"   
        <<"        *MMMMMh   -MMMMM*   JMMMMMMP             \n"   
        <<"          MMMMMM   GMMMM.  dMMMMMM            .  \n"   
        <<"           MMMMMM  -MMMM  .MMMMM(        .nnMM*  \n"   
        <<"..          *MMMMx  MMM*  dMMMM*    .nnMMMMM*    \n"   
        <<" -MMn...     -MMMMr -MM   MMM*   .nMMMMMMMM*     \n"   
        <<"  **MMMMnn..   *MMM  MM  MMP*  .dMMMMMMMM*       \n"       
        <<"    ^MMMMMMMMx.  *ML -M .M*  .MMMMMM***          \n"   
        <<"       *PMMMMMMhn. *x > M  .MMMMMMM*             \n"   
        <<"          ****MMMMhx/.h/ .=MMM****               \n"   
        <<"                   333.*%.333                    \n"          
        <<"                   *        *                    \n"   
        // -----------------------------------------------  \n//
        << std::endl;
        file.close(); 
    }
}
