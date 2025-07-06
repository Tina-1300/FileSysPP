# FileSysPP
⚡ FileSysPP is a modern, high-performance C++ library for manipulating files, directories, and disks, designed to surpass std::filesystem in efficiency, flexibility, and simplicity. Ideal for demanding developers who want to maintain full control over the file system without sacrificing code readability.


## Use

```cpp
#include <iostream>
#include <FileSysPP/File.hpp>

// g++ -O2 -Wall -Wextra -o test.exe test.cpp -lFileSysPP


int main(){

    FileSysPP::browse(L"C:\\");

    std::cin.get();
};

```