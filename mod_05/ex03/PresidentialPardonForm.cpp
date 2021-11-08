#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
        Form("PresidentialPardonForm", 25, 5){
    this->_target = "";
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target):
        Form("PresidentialPardonForm", 25, 5),
        _target(target){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
        Form(other){
    this->_target = other._target;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    return ;
}

PresidentialPardonForm
&PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    Form::operator=(other);
    this->_target = other._target;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const{
    this->executorValidation(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    return ;
}
