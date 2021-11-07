#ifndef _FORM_H_
#define _FORM_H_

# include <exception>
# include <iostream>
# include <string>
# include <sstream>
# include "Bureaucrat.hpp"

class Form{
private:
    const std::string   _name;
    const int           _signGrade;
    const int           _executeGrade;
    bool                _isSigned;
    Form();
protected:
    void                executorValidation(const Bureaucrat &other) const;
public:
    Form(const std::string &name, int signGrade, int executeGrade);
    Form(const Form &other);
    virtual ~Form();

    Form                &operator=(const Form &other);
    const std::string   &getName() const;
    bool                itIsSigned() const;
    int                 getSignGrade() const;
    int                 getExecuteGrade() const;
    void                beSigned(Bureaucrat &other);
    virtual void        execute(const Bureaucrat &executor) const = 0;

    class GradeTooHighException: public std::exception{
    private:
        std::string _msg;
        GradeTooHighException();
    public:
        GradeTooHighException(int badGrade);
        ~GradeTooHighException() throw() {}
        const char  *what() const throw();
	};

	class GradeTooLowException: public std::exception{
    private:
        std::string _msg;
        GradeTooLowException();
    public:
        GradeTooLowException(int badGrade);
        ~GradeTooLowException() throw() {}
        const char  *what() const throw();
	};

	class NotSignedException: public std::exception{
    public:
        const char* what() const throw();
	};
};


std::ostream        &operator<<(std::ostream &os, const Form &other);

#endif
