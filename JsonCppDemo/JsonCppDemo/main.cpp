#include <iostream>
#include <fstream>
#include <string>
#include <atlstr.h>
#include "../../JsonCpp/json.h"//ʹ�����·������

using namespace std;

bool ReadJsonFile(string sFileName);
bool IsFileExist(const CString& csFile);

int main(void)
{
    ReadJsonFile("test.json");

    return 0;
}

/*
Fun:��ȡJson�ļ�
Param��fileName�ļ�����
Rtv����ȡ�Ƿ�ɹ�
*/
bool ReadJsonFile(string sFileName)
{
    //�ж��ļ��Ƿ����
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

// �ж��ļ��Ƿ����
bool IsFileExist(const CString& csFile)
{
    DWORD dwAttrib = GetFileAttributes(csFile);
    return INVALID_FILE_ATTRIBUTES != dwAttrib && 0 == (dwAttrib & FILE_ATTRIBUTE_DIRECTORY);
}