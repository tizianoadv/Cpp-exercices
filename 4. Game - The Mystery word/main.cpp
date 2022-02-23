/**
 * @file main.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Mystery word - A game which select randomly a word from a list,
 * - mix the letter of the mystery word
 * - a user must found the right word
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021 
 */
#include <iostream>


#include "file.h"
#include "gameplay.h"

int main(){
    int listGenOk = 0;
    int NoneProblemsOccured = 0;
    string randomWord = "";

    //0.0 Print all F1 teams in a fancy way
    fancy_print_f1_team();

    //0. Generate a list of 10 words into a file
    listGenOk = generateList();  
    if(listGenOk){
        //1. Select a random word from the list
        randomWord = selectWord();
        NoneProblemsOccured = 1;
    }else{
        cout << "Error : list of words not generated ! \n";
        NoneProblemsOccured = 0;
    }
    
    //2. Mix the letters of the word
    if(randomWord != "" && randomWord != " " && NoneProblemsOccured){
        cout << "Mystery word : " << mixLetters(randomWord) << endl;
        NoneProblemsOccured = 1;
    }else{
        cout << "Error : Random word not selected !\n ";
        NoneProblemsOccured = 0;
    }

    //3. Try to find the right word
    if(NoneProblemsOccured){
        while(wordsMatch(randomWord) != true);
    }else{
        cout << "Error : A problem occured with mixing letters !\n ";
    }
    
    return 0;
}