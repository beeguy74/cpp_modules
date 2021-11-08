#ifndef _SHRUBBERY_H_
#define _SHRUBBERY_H_

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form{
private:
    std::string     _target;

    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &other);
    void                    execute(const Bureaucrat &executor) const;
};

#endif