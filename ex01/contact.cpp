#include "contact.hpp"

void Contact::create()
{
    std::cout << "Enter a new contact info:" << std::endl;
    std::cout << "Enter a first name:" << std::endl;
    std::cin >> first_name;
    std::cout << "Enter a last name:" << std::endl;
    std::cin >> last_name;
    std::cout << "Enter a nickname:" << std::endl;
    std::cin >> nick_name;
    std::cout << "Enter a phone number:" << std::endl;
    std::cin >> phone_numb;
    std::cout << "Enter a darkest secret:" << std::endl;
    std::cin >> secret;
}

void Contact::print()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nick_name << std::endl;
    std::cout << phone_numb << std::endl;
    std::cout << secret << std::endl;
}

void Contact::format(std::string st)
{
	std::istringstream is(st);
    char arr[10];
	if (st.size() > 10)
	{
		is >> std::setw(10) >> arr;
		std::cout << arr << ".";
	}
	else
		std::cout << std::setw(10) << st;
}

void Contact::print_search(int  i)
{
    std::cout << std::setw(10) << i << "|";
	format(first_name);
    std::cout << "|";
	format(last_name);
    std::cout << "|";
	format(nick_name);
    std::cout << std::endl;
}
