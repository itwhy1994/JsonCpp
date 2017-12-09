#pragma once

#include <string>
#include <atlstr.h>
#include "../../JsonCpp/json.h"//使用相对路径包含
#include <fstream>

using namespace Json;

class JsonCppDemo
{
public:
    JsonCppDemo();
    ~JsonCppDemo();

    bool ReadJsonFile(std::string sFileName);
private:
    // 判断文件是否存在
    bool IsFileExist(const CString& csFile);
};
