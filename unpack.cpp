#include <string>  
#include <iostream>  
#include <filesystem>  
#include <vector>
#include <Windows.h>
#include "DirectoryData.h"
using namespace std::filesystem;
using namespace std;

int main(){
    vector<string> myList;
    myList.push_back("C:\\example\\directory.txt");
    cout << myList[0] << endl;

    path source = exePath();
    cout << source << endl;

    source = myList[0];
    cout << source << endl;
}

