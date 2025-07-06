#include "../include/FileSysPP/File.hpp"
#include <iostream>
#include <windows.h>

#include <deque>
#include <sstream>


namespace FileSysPP{

    void browse(const std::wstring& path){
        WIN32_FIND_DATAW findFileData;
        HANDLE hFind = FindFirstFileW((path + L"\\*").c_str(), &findFileData);
    
        if (hFind == INVALID_HANDLE_VALUE){
            std::wcerr << "Error : Unable to open folder " << path << "\n";
        }
    
        do{
            std::wstring fileName = findFileData.cFileName;
            if (fileName != L"." && fileName != L".."){
                std::wstring fullPath = path + L"\\" + fileName;
                if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){
                    std::wcout << "[Dossier] : " << fullPath << "\n";
                    browse(fullPath);
                }else{
                    std::wcout << "[Fichier] : " << fullPath << "\n";
                }
            }
        }while (FindNextFileW(hFind, &findFileData) != 0);
    
        FindClose(hFind);
    }



}