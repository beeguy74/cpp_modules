#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){
    this->_types[0] = "ShrubberyCreation Shrubbery Creation Shrubbery creation shrubbery creation";
    this->_types[1] = "RobotomyRequest Robotomy Request Robotomy request robotomy request";
    this->_types[2] = "PresidentialPardon Presidential Pardon Presidential pardon presidential pardon ";
    this->_funcPtr[0] = &Intern::newShrubbery;
    this->_funcPtr[1] = &Intern::newRobotomy;
    this->_funcPtr[2] = &Intern::newPresidentialPardon;
    return ;
}

Intern::Intern(const Intern &other){
    this->operator=(other);
    return ;
}

Intern::~Intern(){
    return ;
}

Intern  &Intern::operator=(const Intern &other){
    for (int i = 0; i < 3; ++i){
        this->_types[i] = other._types[i];
        this->_funcPtr[i] = other._funcPtr[i];
    }
    return *this;
}

Form    *Intern::newShrubbery(std::string &target){
    return new ShrubberyCreationForm(target);
}

Form    *Intern::newRobotomy(std::string &target){
    return new RobotomyRequestForm(target);
}

Form    *Intern::newPresidentialPardon(std::string &target){
    return new PresidentialPardonForm(target);
}

Form    *Intern::makeForm(std::string &name, std::string &target){
    Form    *ptr;
    for (int i = 0; i < 3; ++i){
        if (this->_types[i].find(name) != std::string::npos){
            ptr = (this->*_funcPtr[i])(target);
            return ptr;
        }
    }
    std::cout << "Error, form " << name << " does not exist!" << std::endl;
    return NULL;
}
