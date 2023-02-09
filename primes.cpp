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
    
    //The input is integer is num
    //The boolean tf sees whether the number is prime or not
    int num;
    bool tf = true;
    
    cout << "Enter integer: ";
    cin >> num;
    cout << "Primes up to the input integer: ";
    
    //The code iterates through each number below the input and
    //sees if the number is prime or not
    for(int i = 2; i <= num; i++) {
        for(int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                tf = false;
            }
        }
        
        //if tf is true, then i is a prime number and gets printed out
        if (tf){
            cout << i << " ";
        }
        
        tf = true;
    
    }
    cout << "" << endl;
    
    return 0;
}
