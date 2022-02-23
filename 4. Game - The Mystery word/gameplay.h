/**
 * @file gameplay.h
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Prototypes of gameplay.cpp functions
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021 
 */

#ifndef GAMEPLAY
#define GAMEPLAY

#include <string>

using namespace std;

/**
 * @brief Ask a user to type a word with whitespaces if needed
 * and transform it from to lower case 
 * @return string 
 */
string getWordFromUser();

/**
 * @brief Transform a string to lower case
 * @return string 
 */
string toLowerCase(string word);

/**
 * @brief Check if the userWord matches with the mystery word 
 * or not and return the result
 * @return bool 
 */
bool wordsMatch(string mysteryWord);

/**
 * @brief Mix letters of the mystery word 
 * and return the word with the letters mixed
 * @return string
 */
string mixLetters(string mysteryWord);

/**
 * @brief Print all names of all F1 teams 
 * in a fancy way
 * @return void
 */
void fancy_print_f1_team();

#endif