/*
      PIC 10A Homework 3, primes.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 02/09/2023
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    //This function prints out all prime numbers up to the integer
    
    //The input is integer is
    int num;
    bool tf = true;
    
    cout << "Enter integer: ";
    cin >> num;
    cout << "Primes up to the input integer: ";
    for(int i = 2; i <= num; i++) {
        for(int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                tf = false;
            }
        }
        
        if (tf){
            cout << i << " ";
        }
        
        tf = true;
    
    }
    cout << "" << endl;
    
    return 0;
}
