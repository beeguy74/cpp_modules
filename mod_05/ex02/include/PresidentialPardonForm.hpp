#ifndef _PRESIDENTIAL_PARDON_H_
#define _PRESIDENTIAL_PARDON_H_

# include "Form.hpp"

class PresidentialPardonForm: public Form{
private:
    std::string     _target;

    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm   &operator=(const PresidentialPardonForm &other);
    void                    execute(const Bureaucrat &executor) const;
};

#endif