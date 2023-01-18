/*
      PIC 10A Homework 1, number.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 01/20/2023
*/

#include <iostream>
using namespace std;

//Problem 2
int main() {
    
    cout << "Input a three-digit number (100 - 999):" << endl;
    
    int num1;
    int num2;
    cin >> num1;
    
    num2 = num1 % 100;
    if (num1 % 10 == 0) {
        if (num1 % 100 == 0) {
            cout << "The reverse of the number is " << num1 / 100 << "." << endl;
        } else {
            cout << "The reverse of the number is " << (num2 / 10) << (num1 / 100) << "." << endl;
        }
    } else {
        cout << "The reverse of the number is " << (num2 % 10) << (num2 / 10) << (num1 / 100) << "." << endl;
    }
    
    cout << "The sum of the digit of the number is " << (num2 % 10) + (num2 / 10) + (num1 / 100) << "." << endl;
    
}




