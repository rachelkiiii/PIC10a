/*
      PIC 10A Homework 5, Combineswap.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 02/25/2023
*/


# include <iostream>
# include <string>

using namespace std;


// Your function combine_swap
string combine_swap(string& str1, string& str2) {

    // the combined string
    string combined_str;

    // Implement the function below to first combine the two strings str1, str2; and then swap them.
    
    //when str1 is greater than str2
    if (str1.length() > str2.length()) {
        for (int i = 0; i <= str2.length(); i++){
            combined_str += str1.substr(i,1) + str2.substr(i,1);
        }
        
        combined_str += str1.substr(str2.length()+1);
    //when str2 is greater than str1
    } else if (str1.length() < str2.length()){
        for (int i = 0; i <= str1.length(); i++){
            combined_str += str1.substr(i,1) + str2.substr(i,1);
        }
        
        combined_str += str2.substr(str1.length()+1);
    //when they are the same length
    } else {
        for (int i = 0; i <= str1.length(); i++){
            combined_str += str1.substr(i,1) + str2.substr(i,1);
        }
    }
    
    
    //swap str1 and str2 with a new string variable
    string newstring = str2;
    str2 = str1;
    str1 = newstring;

    return combined_str;

}

// You do not need to modify the main function below.
int main() {
    string string1;
    string string2;

    cout << "Please input two strings:" << endl;
    // input two strings
    getline(cin, string1);
    getline(cin, string2);

    // call your function combine_swap
    string combined_string = combine_swap(string1, string2);

    // output
    cout << "The combined string is " << combined_string << "." << endl;
    cout << "string1 is now " << string1 << "." << endl;
    cout << "string2 is now " << string2 << "." << endl;

    return 0;

}
