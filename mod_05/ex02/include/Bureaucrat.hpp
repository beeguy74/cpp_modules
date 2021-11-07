#ifndef _BUREAUCRAT_H_
#define _BUREAUCRAT_H_

# include <exception>
# include <iostream>
# include <string>
# include <sstream>

class Form;

class Bureaucrat{
private:
    const std::string   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    virtual ~Bureaucrat();

    Bureaucrat          &operator=(const Bureaucrat &other);
    const std::string   &getName() const;
    int                 getGrade() const;
    void                incrementGrade();
    void                decrementGrade();
    void                signForm(Form &other);
    void                executeForm(const Form &form);

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
};

std::ostream        &operator<<(std::ostream &os, const Bureaucrat &other);

#endif
