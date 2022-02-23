/**
 * @file main.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Dynamic array to determine a mean average
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021 
 */
#include <iostream> // For I/O functions
#include <vector> // For vectors

using namespace std;

int main(){
    vector<double> note;
    int i;
    double tmp=0,somme=0;

    for(i=0 ; i < 5 ; i++){
        cout << "Give the " << i+1 << " number : ";
        cin >> tmp;
        note.push_back(tmp);
    }

    for(i=0 ; i < note.size() ; i++){ somme += note[i]; }
    
    cout << "The average grade is : " << somme/note.size() << "\n";

    return 0;
}