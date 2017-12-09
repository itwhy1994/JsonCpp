#include "JsonCppDemo.h"

JsonCppDemo::JsonCppDemo()
{
}

JsonCppDemo::~JsonCppDemo()
{
}

/*
Fun:��ȡJson�ļ�
Param��fileName�ļ�����
Rtv����ȡ�Ƿ�ɹ�
*/
bool JsonCppDemo::ReadJsonFile(std::string sFileName)
{
    //�ж��ļ��Ƿ����
    if (!IsFileExist(sFileName.c_str()))
    {
        std::cerr << "The File Not Exist!" << std::endl;
        return false;
    }

    std::ifstream file(sFileName, std::ios::binary);
    if (!file.is_open())
    {
        std::cerr << "File Open Fail!" << std::endl;
        return false;
    }

    Reader reader;
    Value value;
    if (!reader.parse(file, value, false))
    {
        std::cerr << "Parse Fail!" << std::endl;
        return false;
    }

    

    return false;
}

// �ж��ļ��Ƿ����
bool JsonCppDemo::IsFileExist(const CString& csFile)
{
    DWORD dwAttrib = GetFileAttributes(csFile);
    return INVALID_FILE_ATTRIBUTES != dwAttrib && 0 == (dwAttrib & FILE_ATTRIBUTE_DIRECTORY);
}
