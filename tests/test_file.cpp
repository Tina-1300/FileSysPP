#include "FileSysPP/File.hpp"
#include <iostream>

// g++ -O2 -Wall -Wextra -o test.exe test.cpp -lFileSysPP


int main(){

    FileSysPP::browse(L"C:\\");

    std::cin.get();
};