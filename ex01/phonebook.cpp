#include "phonebook.hpp"

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
}

void Phonebook::search()
{
    int pick;

    while (1)
    {
        std::cout << "  index   first name  last name   nickname" << std::endl;
        for (int i = 0; i < (full == 1)? 8 : index; i++)
            arr[i].print_search(i);
        std::cout << "Enter a contact's index to display more info:" << std::endl;
        std::cin >> pick;
        if (pick >= 0 && pick < 8)
        {
            arr[pick].print();
            break ;
        }
        else
            std::cout << "Wrong index, try enter another" << std::endl;
    }
}

int main(void)
{
    Phonebook   book;
    std::string comma;

    while (comma.compare("EXIT"))
    {
        std::cout << "Enter a command for you phonebook:" << std::endl;
        std::cin >> comma;
        if (!comma.compare("ADD"))
            book.add();
        else if (!comma.compare("SEARCH"))
            book.search();
    }
    return (0);
}