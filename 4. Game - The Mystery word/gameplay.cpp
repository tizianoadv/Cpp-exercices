/**
 * @file gameplay.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief functions 
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "gameplay.h"

/**
 * @brief Ask a user to type a word with whitespaces if needed
 * and transform it from to lower case 
 * @return string 
 */
string getWordFromUser(){
    string word="", lowerWord="";

    cout << "Type a word : ";
    getline(cin,word);
    lowerWord = toLowerCase(word);

    return lowerWord;
}

/**
 * @brief Transform a string to lower case
 * @return string 
 */
string toLowerCase(string word){
    int i=0;
    
    for(i=0 ; i < word.length() ; i++){
        if((word[i] >= 65) && (word[i] <= 90)){
            word[i] += 32;
        }
    }
    return word;
}

/**
 * @brief Check if the userWord matches with the mystery word 
 * or not and return the result
 * @return bool
 */
bool wordsMatch(string mysteryWord){
    bool wordsMatch = false;
    string userWord = "";

    mysteryWord = toLowerCase(mysteryWord);
    userWord = getWordFromUser();
    
    if(userWord.compare(mysteryWord)==0){
        wordsMatch = true;
    }

    if(wordsMatch == true){
        cout << "Congratulation !\n" << endl;
    }else{
        cout << "No, this isn't the right word, try again !\n" << endl;
    }

    return wordsMatch;
}

/**
 * @brief Mix letters of the mystery word 
 * and return the word with the letters mixed
 * @return string
 */
string mixLetters(string mysteryWord){
    int i = 0;
    int position = 0;
    string mixedWord = " ";
    
    srand(time(0));

    while( mysteryWord.size() != 0){

        //Select a letter
        position = rand() % mysteryWord.size();

        //Set the letter select to a new position
        mixedWord.append(1, mysteryWord[position]);

        //Erase the letter selected from the mystery word
        mysteryWord.erase(position,1);

        i++;
    }

    return mixedWord.erase(0,1);
}

/**
 * @brief Print all names of all F1 teams 
 * in a fancy way
 * @return void
 */
void fancy_print_f1_team(){
    cout << "\t     -------------------------------" << endl;
    cout << "\t     ------ Formula 1 - Teams ------" << endl;
    cout << "\t     -------------------------------" << endl<< endl;
    cout << "\talpine \t\t\t\tferrari" << endl;
    cout << "\tmclaren \t\t\twilliams" << endl;
    cout << "\tmercedes \t\t\thaas" << endl;
    cout << "\taston martin \t\t\talpha tauri" << endl;
    cout << "\tred bull racing \t\talpha romeo racing" << endl << endl;
}