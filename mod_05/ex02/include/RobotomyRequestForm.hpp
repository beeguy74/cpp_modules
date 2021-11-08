#ifndef _ROBOTOMY_H_
#define _ROBOTOMY_H_

# include "Form.hpp"

class RobotomyRequestForm: public Form{
private:
    std::string     _target;

    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm   &operator=(const RobotomyRequestForm &other);
    void                    execute(const Bureaucrat &executor) const;
};

#endif