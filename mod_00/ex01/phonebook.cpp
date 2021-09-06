#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->full = 0;
    this->index = 0;
    return ;
}

Phonebook::~Phonebook(void){
    return ;
}

void Phonebook::add()
{
    arr[index].create();
    if (index == 7)
    {
        full = 1;
        index = 0;
    }
    else
        index++;
    return ;
}

void Phonebook::search()
{
    int                 pick;
    int                 max;
    std::string         tmp;
    std::stringstream   ss;

    if (!this->index && !this->full)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    while (1)
    {
        std::cout << "     index|first name| last name|  nickname" << std::endl;
        max = (this->full > 0)? 8 : this->index;
        for (int i = 0; i < max; i++)
            arr[i].print_search(i);
        std::cout << "Enter a contact's index to display more info:" << std::endl;
        std::getline(std::cin, tmp);
        if (!tmp.compare("EXIT"))
            exit(0);
        ss << tmp;
        ss >> pick;
        if (pick >= 0 && pick < max)
        {
            arr[pick].print();
            return ;
        }
        else
            std::cout << "Wrong index, try enter another" << std::endl;
    }
    return ;
}
