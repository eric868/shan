#pragma once
#include <string>
#include "base.h"
namespace base
{

/*
 * generate md5 value of text
 * @param text[in]
 * @param length[in] length of the text, if -1, it will calculate the length automatically
 * @param return md5 value of the text
 */
    std::string md5(const char* text, int length = -1);
/*
 * generate md5 value of text
 * @param output[out] md5 value of the text
 * @param text[in]
 * @param length[in] length of the text, if -1, it will calculate the length automatically
 * @param return
 */
    int md5(std::string& output, const char* text, int length = -1);
/*
 * generate md5 value of file
 * @param file_path[in] target file path
 * @param return
 */
    std::string md5_file(const char* file_path);
/*
 * generate md5 value of file
 * @param output[out] md5 value of the text
 * @param file_path[in] target file path
 * @param return 0 if successful, else if failed
 */
    int md5_file(std::string& output, const char* file_path);

/*
 * generate md5 value of file
 * @param output[out] md5 value of the text
 * @param file_path[in] target file path
 * @param return 0 if successful, else if failed
 */
//int calcul_path_md5(std::string& output, const char* file_path,const char* type);
    int calcul_path_md5(std::string& output, const char* file_path, const std::string stype = "$.exe$.so$.a$");
}

