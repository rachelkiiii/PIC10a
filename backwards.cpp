/*
      PIC 10A Homework 3, backwards.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 02/09/2023
*/

#include <iostream>
using namespace std;

int main() {
    //This function prints the input out in reverse
    
    //name will be the input
    string name;
    //newname will contain the reverse word later
    string newname;
    
    //obtain the input
    cout << "Enter word: ";
    cin >> name;
    
    //lenname is the length of the input
    int lenname = int(name.length());
    
    //For loop that obtains each character of the string from the back
    for(int i = lenname; i >= 0; i--){
        newname  += name[i];
    }

    cout << "Backwards: " << newname << endl;
    return 0;
}
