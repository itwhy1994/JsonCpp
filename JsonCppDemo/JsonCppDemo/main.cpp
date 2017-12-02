#include <iostream>
#include <fstream>
#include <string>
#include <atlstr.h>
#include "../../JsonCpp/json.h"//使用相对路径包含

using namespace std;

bool ReadJsonFile(string sFileName);
bool IsFileExist(const CString& csFile);

int main(void)
{
    ReadJsonFile("test.json");

    return 0;
}

/*
Fun:读取Json文件
Param：fileName文件名字
Rtv：读取是否成功
*/
bool ReadJsonFile(string sFileName)
{
    //判断文件是否存在
    if (!IsFileExist(sFileName.c_str()))
    {
        cout << "The File Not Exist!" << endl;
        return false;
    }

    Json::Reader reader;
    Json::Value value;

    ifstream file(sFileName, ios::binary);

    return false;
}

// 判断文件是否存在
bool IsFileExist(const CString& csFile)
{
    DWORD dwAttrib = GetFileAttributes(csFile);
    return INVALID_FILE_ATTRIBUTES != dwAttrib && 0 == (dwAttrib & FILE_ATTRIBUTE_DIRECTORY);
}