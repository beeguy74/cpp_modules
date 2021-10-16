#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	print_ten_ideas(const Brain *brain) {
    for (int i = 0; i < 10; i++){
        std::cout << brain->getIdeas()[i] << " ";
		if ((i + 1) % 10 == 0){
			std::cout << std::endl;
		}
    }
}

int main(void){
	Animal *arr[10];

	for (int i = 0; i < 10; ++i){
		if (i < 5)
			arr[i] = new Cat;
		else
			arr[i] = new Dog;
	}

	for (int i = 0; i < 10; ++i){
		delete arr[i];
	}

	Dog	petya;
	Dog vasya;

	std::cout << "petya's ideas" << std::endl;
	print_ten_ideas(petya.getBrain());
	std::cout << "vasya's ideas" << std::endl;
	print_ten_ideas(vasya.getBrain());
	petya = vasya;
	std::cout << "petya is copy of vasya" << std::endl;
	print_ten_ideas(vasya.getBrain());
	while (true)
		;
	return 0;
}