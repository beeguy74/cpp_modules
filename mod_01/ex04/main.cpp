#include <iostream>
#include <fstream>
#include <sstream>

bool    fileToStr(char *fileName, std::string &text){
    std::ifstream           inputFile;
    std::stringstream       strStream;

    inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        inputFile.open(fileName);
        strStream << inputFile.rdbuf();
        text = strStream.str();
    }
    catch (std::ifstream::failure e) {
        std::cerr << "Exception opening " << fileName << std::endl;
        return true;
    }
    return false;
}

bool    replace(std::string text, std::string s1, std::string s2)
{
    std::size_t     found;
    std::size_t     pos;

    found = 0;
    while (true)
    {
        pos = found;
        found = text.find(s1, pos);
        if (found == std::string::npos)
            return false;
        text.erase(found, found + s1.size());
        text.insert(found, s2);
    }
    return true;
}

int main(int argc, char** argv){
    bool        flag = false;
    std::string text;

    std::cerr << "HELLO" << std::endl;
    if (argc != 4){
        std::cerr << "Wrong arguments" << std::endl;
    }
    flag = fileToStr(argv[1], text);
    if (flag)
    {
        std::cerr << "Wrong" << std::endl;
        return 1;
    }
    flag = replace(text, argv[2], argv[3]);
    if (flag)
    {
        std::cerr << "Wro" << std::endl;
        return 1;
    }
    std::cout << text << std::endl;
    return 0;
}