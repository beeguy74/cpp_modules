#include "phonebook.hpp"

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