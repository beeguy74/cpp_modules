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

void Contact::print_search(int  i)
{
    std::cout << i << "   ";
    std::cout << first_name << "  ";
    std::cout << last_name << "  ";
    std::cout << nick_name << std::endl;
}