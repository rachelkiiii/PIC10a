/*
      PIC 10A Homework 2, String.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 01/31/2023
*/

#include <iostream>
#include <string.h>
using namespace std;


int main() {
    // this function outputs the length, first 5th characters of the word, last 5 characters of the word,
    // word after deletion of the last characters, and the fourth character of the word.
    
    //declare on string
    string val;
    cout << "Input your long word: ";
    
    //input the string as val
    getline(cin, val);
    
    //outputs
    cout << "The length of your sentence is: " << val.length() << endl;
    cout << "The first 5 characters of your word is: " << val.substr(0,5) << endl;
    cout << "The last 5 characters of your word is: " << val.substr(val.length()-5, val.length()) << endl;
    cout << "The word after deleting last 5 character is: " << val.substr(0, val.length()-5) << endl;
    cout << "The 4th character of you word is: " << val[3] << endl;
    return 0;
}
