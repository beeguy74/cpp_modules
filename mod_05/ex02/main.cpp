
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void){
	Bureaucrat	petya = Bureaucrat("Petya", 146);
	Bureaucrat	vanya = Bureaucrat("Vanya", 137);
	std::string	home = "home";
	ShrubberyCreationForm form = ShrubberyCreationForm(home);


	std::cout << petya << std::endl;
	std::cout << form << std::endl;
	petya.signForm(form);
	std::cout << vanya << std::endl;
	vanya.executeForm(form);
	vanya.signForm(form);
	petya.executeForm(form);
	vanya.executeForm(form);
	return 0;
}