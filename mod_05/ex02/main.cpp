
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	Bureaucrat	petya = Bureaucrat("Petya", 146);
	Bureaucrat	vanya = Bureaucrat("Vanya", 35);
	Bureaucrat	vicePresident = Bureaucrat("vicePresident", 2);
	std::string	home = "home";
	std::string chair = "chair";
	std::string person = "person";
	ShrubberyCreationForm shrubbery = ShrubberyCreationForm(home);
	RobotomyRequestForm robotomy = RobotomyRequestForm(chair);
	PresidentialPardonForm pardon = PresidentialPardonForm(person);


	std::cout << petya << std::endl;
	std::cout << shrubbery << std::endl;
	petya.signForm(shrubbery);
	std::cout << vanya << std::endl;
	vanya.executeForm(shrubbery);
	vanya.signForm(shrubbery);
	petya.executeForm(shrubbery);
	vanya.executeForm(shrubbery);

	vanya.signForm(robotomy);
	vanya.executeForm(robotomy);
	std::cout << vicePresident << std::endl;
	vicePresident.signForm(pardon);
	vicePresident.executeForm(pardon);
	return 0;
}