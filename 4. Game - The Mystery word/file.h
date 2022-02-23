/**
 * @file file.h
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Prototypes of file.cpp functions
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021 
 */
#ifndef FILE
#define FILE

#include <string>

using namespace std;

/**
 * @brief select randomly a word from a list * 
 * @return string 
 */
string selectWord();

/**
 * @brief Generate a list of 10 word
 * and write them to a file 
 * @return int 
 */
int generateList();

#endif