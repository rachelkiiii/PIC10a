/*
      PIC 10A Homework 2, RankString.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 01/31/2023
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    //this function inputs three strings and outputs it in descending order
    
    // declare three strings
    string val1;
    string val2;
    string val3;
    
    //input three strings
    cout << "Please enter three strings: " << endl;
    getline(cin, val1);
    getline(cin, val2);
    getline(cin, val3);
    
    //output in descending order
    cout << "Descending dictionary order: " << endl;
    
    
    //when val1 is greatest
    if ((val1 > val2) && (val1 > val3)) {
        if (val2 > val3) {
            cout << val1 << "\n" << val2 << "\n" << val3 << endl;
        } else {
            cout << val1 << "\n" << val3 << "\n" << val2 << endl;
        }
        // when val 2 is greatest
    } else if ((val2 > val1) && (val2 > val3)) {
        if (val1 > val3) {
            cout << val2 << "\n" << val1 << "\n" << val3 << endl;
        } else {
            cout << val2 << "\n" << val3 << "\n" << val1 << endl;
        }
        //when val 3 is greateset
    } else {
        if (val1 > val2) {
            cout << val3 << "\n" << val1 << "\n" << val2 << endl;
        } else {
            cout << val3 << "\n" << val2 << "\n" << val1 << endl;
        }
    }
    
    return 0;
}
