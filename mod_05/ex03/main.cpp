
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	Intern		intern = Intern();
	Bureaucrat	petya = Bureaucrat("Petya", 146);
	Bureaucrat	vanya = Bureaucrat("Vanya", 35);
	Bureaucrat	vicePresident = Bureaucrat("vicePresident", 2);
	std::string	home = "home";
	std::string chair = "chair";
	std::string person = "person";
	std::string	shrubbery = "shrubbery";
	std::string robotomy = "robotomy";
	std::string pardon = "pardon";
	Form	*forms[3];

	forms[0] = intern.makeForm(shrubbery, home);
	forms[1] = intern.makeForm(robotomy, chair);
	forms[2] = intern.makeForm(pardon, person);
	std::cout << petya << std::endl;
	std::cout << shrubbery << std::endl;
	petya.signForm(*forms[0]);
	std::cout << vanya << std::endl;
	vanya.executeForm(*forms[0]);
	vanya.signForm(*forms[0]);
	petya.executeForm(*forms[0]);
	vanya.executeForm(*forms[0]);

	vanya.signForm(*forms[1]);
	vanya.executeForm(*forms[1]);
	std::cout << vicePresident << std::endl;
	vicePresident.signForm(*forms[2]);
	vicePresident.executeForm(*forms[2]);
	for (int i = 0; i < 3; ++i){
		delete forms[i];
	}
	return 0;
}