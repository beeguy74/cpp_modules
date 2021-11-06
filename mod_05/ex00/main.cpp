#include "Bureaucrat.hpp"

int main(void){
	Bureaucrat petya = Bureaucrat("petya", 1);

	std::cout << petya << std::endl;
	std::cout << "Trying to increment petya grade" << std::endl;
	try{
		petya.incrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Trying to decrement petya grade" << std::endl;
	petya.decrementGrade();
	std::cout << petya << std::endl << std::endl;

	Bureaucrat vanya = Bureaucrat("vanya", 150);

	std::cout << vanya << std::endl;
	std::cout << "Trying to Decrement vanya grade" << std::endl;
	try{
		vanya.decrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Trying to increment vanya grade" << std::endl;
	vanya.incrementGrade();
	std::cout << vanya << std::endl << std::endl;

	std::cout << "Trying to create Vasya with 160 grade" << std::endl;
	try{
		Bureaucrat vasya = Bureaucrat("vasya", 160);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}