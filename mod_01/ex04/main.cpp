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

int main(int argc, char** argv){
    bool        flag = false;
    std::string text;

    if (argc < 2){
        std::cerr << "Wrong arguments" << std::endl;
    }
    flag = fileToStr(argv[1], text);
    if (flag)
        return 1;
    std::cout << text << std::endl;
    return 0;
}