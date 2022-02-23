/**
 * @file file.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief functions which generate a list of word 
 * and selected one of them randomly
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021 
 */

#include <fstream> // For streams functions
#include <iostream> // For io streams functions
#include <ctime> // For time function
#include <cstdlib> // For srand function

#include "file.h"

/**
 * @brief select randomly a word from a list * 
 * @return string 
 */
string selectWord(){
    string const fileName("list.txt");
    string selectedWord = "", tmp = "";
    ifstream myStream;
    int const numberOfWordsInList = 10;
    int randomNumber = 0, i = 0;
    
    srand(time(0));
    randomNumber = rand() % numberOfWordsInList;

    myStream.open(fileName.c_str());
    if(myStream){
        myStream.seekg(0, ios::beg); // Set the cursor at the current position of the file
        for(i=0 ; i <= randomNumber ; i++){
            getline(myStream,tmp);
        }
        selectedWord = tmp;
    }else{
        cout << "Error : Can't open the stream ! \n";
        selectedWord = "";
    }
    
    myStream.close();

    return selectedWord;
}

/**
 * @brief Generate a list of 10 word
 * and write them to a file 
 * @return int 
 */
int generateList(){
    string const fileName("list.txt");
    ofstream myStream;
    int fctOk=0,i=0;
    int const numberOfWordsInList = 10;
    string myList[numberOfWordsInList] = {   "ferrari",
                            "red bull racing",
                            "mercedes",
                            "mclaren",
                            "aston martin",
                            "alpine",
                            "alpha tauri",
                            "williams",
                            "alpha romeo racing",
                            "haas"};

    myStream.open(fileName.c_str());

    if(myStream){
        myStream.seekp(0, ios::beg); // Set the cursor at the current position of the file
        for(i=0 ; i<numberOfWordsInList ; i++){
            myStream << myList[i];
            myStream << "\n";
        }
        myStream.seekp(0, ios::beg);
        fctOk = 1;
    }else{ 
        cout << "Error : Can't open the stream\n";    
    }

    myStream.close();

    return fctOk;
}