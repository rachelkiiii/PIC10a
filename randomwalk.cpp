/*
      PIC 10A Homework 4, randomwalk.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 02/22/2023
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int x = 0;
    int y = 0;
    
    srand(time(0));

    
    while(x >= -5 && x <= 5 && y >= -5 && y <= 5){
        //random number between -1, 0 (when it is 0, we treat it as 1)
        int i = rand() % (2) - 1;
        
        //random x and y if j is 1 then x if j is 2 then y
        int j = (rand() % 2)+1; //random number between 1 and 2
        
        //if x
        if (j == 1) {
            //adding -1 or 1 to x value
            if (i == -1){
                x += i;
            } else {
                x += 1;
            }
            
            if (i == -1) {
                cout << setw(10) << left << "Left" << "(" << x << "," << y << ")" << endl;
            } else if (i == 0){
                cout << setw(10) << left << "Right" << "(" << x << "," << y << ")" << endl;
            }
        //if y
        } else if (j == 2) {
            //adding -1 or 1 to y value
            if (i == -1){
                y += i;
            } else {
                y += 1;
            }
            
            if (i == -1) {
                cout << setw(10) << left << "Down" << "(" << x << "," << y << ")" << endl;
            } else if (i == 0){
                cout << setw(10) << left << "Up" << "(" << x << "," << y << ")" << endl;
            }
        }
        
        if (x == 5 || y == 5 || x == -5 || y == -5) {
            cout << "Hit the boundary!" << endl;
            break;
        }
        
        if (x == 0 && y == 0){
            cout << "Back to the origin!" << endl;
            break;
        }
        
    }
    return 0;
}
