#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
        Form("RobotomyRequestForm", 72, 45){
    this->_target = "";
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target):
        Form("RobotomyRequestForm", 72, 45),
        _target(target){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
        Form(other){
    this->_target = other._target;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    return ;
}

RobotomyRequestForm
&RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    Form::operator=(other);
    this->_target = other._target;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    this->executorValidation(executor);
    std::cout << "!!Drilling noises!!, " << this->_target 
        << " has been robotomized successfully 50% of the time." << std::endl;
    return ;
}
