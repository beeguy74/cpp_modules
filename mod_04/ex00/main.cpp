#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal* super = new WrongAnimal();
	const WrongAnimal* inst = new WrongCat();
	std::cout << inst->getType() << " " << std::endl;
	inst->makeSound(); //will output the Wrong sound!
	super->makeSound();
	delete super;
	delete inst;
	return 0;
}