#include "phonebook.hpp"

void Phonebook::add()
{
    if (full)
        std::cout << "Deleting oldest contact" << std::endl;
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

    std::cout.width(10);
    std::cout << "index" << "|";
    std::cout.width(10);
    std::cout << "first name" << "|";
    std::cout.width(10);
    std::cout << "last name" << "|";
    std::cout.width(10);
    std::cout << "nickname" << std::endl;
    if (index == 0 && full == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    int max = (full == 1)? 8 : index;
    for (int i = 0; i < max; i++)
    arr[i].print_search(i);
    std::cout << "Enter a contact's index to display more info:" << std::endl;
    std::cin >> pick;
    if (pick >= 0 && pick < 8)
        arr[pick].print();
    else
        std::cout << "Wrong index" << std::endl;
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
