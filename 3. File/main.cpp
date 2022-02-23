/**
 * @file main.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Write to a file and read from it
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021 
 */

#include <iostream> // For I/O functions
#include <string>
#include <fstream> // For files

using namespace std;

int main(){
    string const fileName("test.txt");
    ofstream myFirstStream;
    ifstream mySecondStream;
    string text, line;

    myFirstStream.open(fileName.c_str()); // Open a stream
    if(myFirstStream){
        //Write down a text
        cout << "Text : ";
        cin >> text;
        myFirstStream.seekp(0, ios::cur); // Set the cursor at the current position of the file
        myFirstStream << text;
    }else{ 
        cout << "Error : Can't open the stream\n";    
    }
    
    myFirstStream.close(); // Close the stream

    mySecondStream.open(fileName.c_str()); // Open a new stream
    if(mySecondStream){
        mySecondStream.seekg(0, ios::beg);// Set the cursor at the beginning of the file
        while(getline(mySecondStream, line)){
            //While not EOF
            cout << line << endl; //Print the text
        }
        mySecondStream.seekg(0, ios::beg);
    }else{
        cout << "Error : Can't open the stream\n";
    }
       
    return 0;
}