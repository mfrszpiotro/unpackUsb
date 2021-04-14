#include <string>  
#include <iostream>  
#include <filesystem>  
#include <vector>
#include <Windows.h>

using namespace std::filesystem;
using namespace std;

wstring exePath(){
    TCHAR buffer[MAX_PATH] = { 0 };
    GetModuleFileName(NULL, buffer, MAX_PATH);
    wstring::size_type pos = wstring(buffer).find_last_of(L"\\/");
    return wstring(buffer).substr(0, pos);
}