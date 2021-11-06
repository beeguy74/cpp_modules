#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150){
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):
        _name(name),
        _grade(grade){
    if (this->_grade < 1){
        throw (GradeTooHighException(grade));
        this->_grade = 1;
    }
    else if (this->_grade > 150){
        throw (GradeTooLowException(grade));
        this->_grade = 150;
    }
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
        _name(other._name){
    this->operator=(other);
    return ;
}

Bureaucrat::~Bureaucrat(){
    return ;
}

Bureaucrat     &Bureaucrat::operator=(const Bureaucrat &other){
    this->_grade = other._grade;
    return *this;
}

const std::string   &Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void    Bureaucrat::incrementGrade(){
    if (this->_grade == 1){
        throw (GradeTooHighException(0));
    }
    else {
        --this->_grade;
    }
    return ;
}

void    Bureaucrat::decrementGrade(){
    if (this->_grade == 150){
        throw (GradeTooLowException(151));
    }
    else {
        ++this->_grade;
    }
    return ;
}

void    Bureaucrat::signForm(Form &other){
    try{
        other.beSigned(*this);
        std::cout << this->getName() << " signs " << other.getName() << std::endl;
    }
	catch (std::exception &e){
        std::cout << this->getName() << " cannot sign " << other.getName() << 
        " because "<< e.what() << std::endl;
	}
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(int badGrade){
    std::ostringstream ss_msg;

    ss_msg << "Grade " << badGrade << " is too high!";
    this->_msg = ss_msg.str();
    return ;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw(){
    return this->_msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(int badGrade){
    std::ostringstream ss_msg;

    ss_msg << "Grade " << badGrade << " is too low!";
    this->_msg = ss_msg.str();
    return ;
}

const char  *Bureaucrat::GradeTooLowException::what() const throw(){
    return this->_msg.c_str();
}

std::ostream        &operator<<(std::ostream &os, const Bureaucrat &other){
    os << other.getName() << ", bureaucrat grade " << other.getGrade();
    return os;
}
