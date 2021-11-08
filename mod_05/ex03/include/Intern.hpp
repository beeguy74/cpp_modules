#ifndef _INTERN_H_
#define _INTERN_H_

# include "Form.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern{
private:
    std::string _types[3];
    Form    *(Intern::*_funcPtr[3])(std::string &target);

    Form    *newShrubbery(std::string &target);
    Form    *newRobotomy(std::string &target);
    Form    *newPresidentialPardon(std::string &target);
public:
    Intern();
    Intern(const Intern &other);
    virtual ~Intern();

    Intern  &operator=(const Intern &other);
    Form    *makeForm(std::string &name, std::string &target);
};

#endif