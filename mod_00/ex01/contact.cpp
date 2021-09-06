#include "contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void Contact::create()
{
    std::cout << "Enter a new contact info:" << std::endl;
    std::cout << "Enter a first name:" << std::endl;
    std::getline(std::cin, first_name);
    std::cout << "Enter a last name:" << std::endl;
    std::getline(std::cin, last_name);
    std::cout << "Enter a nickname:" << std::endl;
    std::getline(std::cin, nick_name);
    std::cout << "Enter a phone number:" << std::endl;
    std::getline(std::cin, phone_numb);
    std::cout << "Enter a darkest secret:" << std::endl;
    std::getline(std::cin, secret);
}

void Contact::print()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nick_name << std::endl;
    std::cout << phone_numb << std::endl;
    std::cout << secret << std::endl;
}

std::string Contact::get_stream(std::string src)
{
    std::stringstream   ss;
    std::string         res;

    ss << src;
    if (src.size() > 10)
    {
        ss.width(9);
        ss >> res;
        res += '.';
    }
    else
    {
        ss.width(10);
        ss >> res;
    }
    return res;
}

void Contact::print_search(int  i)
{
    std::cout.width(10);
    std::cout << i << "|";
    std::cout.width(10);
    std::cout << this->get_stream(first_name) << "|";
    // std::cout.fill(' ');
    std::cout.width(10);
    std::cout << this->get_stream(last_name) << "|";
    // std::cout.fill(' ');
    std::cout.width(10);
    std::cout << this->get_stream(nick_name) << std::endl;
}