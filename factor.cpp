/*
      PIC 10A Homework 4, factor.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 02/22/2023
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //This function prints out all the prime factors of the input integer
    int num;
    
    cout << "Input a positive integer greater than 1: ";
    cin >> num;
    cout << "Prime factors: ";
    
    //the code sees if num is even, if it is, num is divided by 2 until num is not even
    while(num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }
    
    //with an odd num, we iterate the sqrt of num to find the prime factors of i
    for(int i = 3; i <= sqrt(num); i += 2){
        while(num % i == 0){
            cout << i << " ";
            num /= i;
        }
    }
    
    //if the input num is a prime factor greater than 2
    if (num > 2) {
        cout << num << " ";
    }
    
    
    cout << "" << endl;
    
    return 0;
}
