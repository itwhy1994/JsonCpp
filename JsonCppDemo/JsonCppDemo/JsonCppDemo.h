#pragma once

#include <string>
#include <atlstr.h>
#include "../../JsonCpp/json.h"//ʹ�����·������
#include <fstream>

using namespace Json;

class JsonCppDemo
{
public:
    JsonCppDemo();
    ~JsonCppDemo();

    bool ReadJsonFile(std::string sFileName);
private:
    // �ж��ļ��Ƿ����
    bool IsFileExist(const CString& csFile);
};
