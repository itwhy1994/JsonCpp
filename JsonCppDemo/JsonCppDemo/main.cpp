#include <iostream>
#include <string>
#include "JsonCppDemo.h"

using namespace std;

void readjsonfile();

int main(void)
{
    readjsonfile();

    return 0;
}

void readjsonfile()
{
    string fileName;
    cout << "Please Input Name of Json File:";
    cin >> fileName;
    JsonCppDemo json;
    if (!json.ReadJsonFile(fileName))
    {
        cout << "Read Fail!!!" << endl;
    }
}