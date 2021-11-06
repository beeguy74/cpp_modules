
#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void){
	Bureaucrat	petya = Bureaucrat("Petya", 39);
	Form check = Form("Check", 40, 40);
	Bureaucrat	vanya = Bureaucrat("Vanya", 1);
	Form impossible = Form("Impossible", 1, 1);

	std::cout << petya << std::endl;
	std::cout << check << std::endl;
	petya.signForm(check);
	std::cout << impossible << std::endl;
	petya.signForm(impossible);
	std::cout << vanya << std::endl;
	vanya.signForm(impossible);
	return 0;
}