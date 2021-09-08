#include "replace.h"

bool    fileToStr(char *fileName, std::string &text){
    std::ifstream           inputFile;
    std::stringstream       strStream;
    std::string             test;

    inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        inputFile.open(fileName);
        if (inputFile.eof()){
            std::cout << "[EoF reached]\n";
            return true;
        }
        test = inputFile.get();
        inputFile.unget();
        strStream << inputFile.rdbuf();
        text = strStream.str();
        inputFile.close();
    }
    catch (const std::ifstream::failure & e) {
        std::cout << "Exception opening " << fileName << std::endl;
        return true;
    }
    return false;
}

bool    ftReplace(std::string &text, std::string &s1, std::string &s2)
{
    std::size_t     found;
    std::size_t     pos;

    found = 0;
    while (true)
    {
        pos = found;
        found = text.find(s1, found);
        if (found == std::string::npos)
            return false;
        text.erase(found, s1.size());
        text.insert(found, s2);
    }
    return true;
}

bool    ftToFile(char *charFileName, std::string &text){
    std::string     fileName = std::string(charFileName);
    std::ofstream   outFile;

    outFile.exceptions(std::ifstream::failbit | std::ifstream::badbit | std::ifstream::eofbit);
    fileName += ".replace";
    try {
        outFile.open(fileName);
        outFile << text;
        outFile.close();
    }
    catch (const std::exception& e) {
        std::cout << "Exception opening to write " << fileName << '\n';
        return true;
    }
    return false;
}

int main(int argc, char** argv){
    bool        flag = false;
    std::string text;
    std::string s1;
    std::string s2;

    if (argc != 4){
        std::cout << "Wrong arguments" << std::endl;
    }
    flag = fileToStr(argv[1], text);
    if (flag)
        return 1;
    s1 = std::string(argv[2]);
    s2 = std::string(argv[3]);
    flag = ftReplace(text, s1, s2);
    if (flag)
        return 1;
    flag = ftToFile(argv[1], text);
    if (flag)
        return 1;
    return 0;
}