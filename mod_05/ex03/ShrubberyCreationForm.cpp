#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
        Form("ShrubberyCreationForm", 145, 137){
    this->_target = "";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):
        Form("ShrubberyCreationForm", 145, 137),
        _target(target){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
        Form(other){
    this->_target = other._target;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    return ;
}

ShrubberyCreationForm
&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    Form::operator=(other);
    this->_target = other._target;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
    this->executorValidation(executor);
    std::ofstream   file;

    file.open(this->_target + "_shrubbery", std::ios::out);
    file << "  @8@@@@    @8888@\n"
        << " @@@@0@@@  @000000@\n"
        << "  @9@@@@    @9999@\n"
        << "    ||        ||\n"
        << ".../||\\....../||\\...\n";
    std::cout << this->_target << "_shrubbery created" << std::endl;
    file.close();
    return ;
}
