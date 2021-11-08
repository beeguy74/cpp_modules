#include "Form.hpp"

Form::Form():  
        _name(""),
        _signGrade(150),
        _executeGrade(150),
        _isSigned(false){
    return ;
}

Form::Form(const std::string &name, int signGrade, int executeGrade):
        _name(name),
        _signGrade(signGrade),
        _executeGrade(executeGrade),
        _isSigned(false){
    if (this->_signGrade < 1){
        throw (Form::GradeTooHighException(signGrade));
    }
    else if (this->_signGrade > 150){
        throw (Form::GradeTooLowException(signGrade));
    }
    if (this->_executeGrade < 1){
        throw (Form::GradeTooHighException(executeGrade));
    }
    else if (this->_executeGrade > 150){
        throw (Form::GradeTooLowException(executeGrade));
    }
    return ;
}

Form::Form(const Form &other):
        _name(other._name),
        _signGrade(other._signGrade),
        _executeGrade(other._executeGrade){
    this->operator=(other);
    return ;
}

Form::~Form(){
    return ;
}

Form    &Form::operator=(const Form &other){
    this->_isSigned = other._isSigned;
    return *this;
}

const std::string   &Form::getName() const{
    return this->_name;
}

bool    Form::itIsSigned() const{
    return this->_isSigned;
}

int Form::getSignGrade() const{
    return this->_signGrade;
}

int Form::getExecuteGrade() const{
    return this->_executeGrade;
}

void    Form::beSigned(Bureaucrat &other){
    if (other.getGrade() <= this->_signGrade){
        this->_isSigned = true;
    }
    else{
        throw (Form::GradeTooLowException(other.getGrade()));
    }
    return ;
}

Form::GradeTooHighException::GradeTooHighException(int badGrade){
    std::ostringstream ss_msg;

    ss_msg << "Grade " << badGrade << " is too high!";
    this->_msg = ss_msg.str();
    return ;
}

const char  *Form::GradeTooHighException::what() const throw(){
    return this->_msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException(int badGrade){
    std::ostringstream ss_msg;

    ss_msg << "Grade " << badGrade << " is too low!";
    this->_msg = ss_msg.str();
    return ;
}

const char  *Form::GradeTooLowException::what() const throw(){
    return this->_msg.c_str();
}

std::ostream        &operator<<(std::ostream &os, const Form &other){
    os << other.getName();
    if (other.itIsSigned()){
        os << " is SIGNED ";
    }
    else{
        os << " is NOT signed ";
    }
    os << "and its signGrade is " << other.getSignGrade()
        << " and form executeGrade is " << other.getExecuteGrade();
    return os;
}

void    Form::executorValidation(const Bureaucrat &other) const{
    if (other.getGrade() > this->_executeGrade){
        throw (Form::GradeTooLowException(other.getGrade()));
    }
    if (!this->_isSigned){
        throw (NotSignedException());
    }
    return ;
}

const char  *Form::NotSignedException::what() const throw(){
	return ("Form not signed");
}
