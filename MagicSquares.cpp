/*
      PIC 10A Homework 6, MagicSquares.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/08/2023
*/

#include <iostream>
#include <vector>
using namespace std;
/*
------------------------------------------------------
You can define other helper functions here if you want.
*/
vector<vector<int>> write_vector_to_square(const vector<int>& vec) {
    /*
     This helper function is intend to write the
     vector in the form of matrix(square).
     Please implement your function here.
     You can use as many lines as you want.
     */
    // Define a 4 by 4 2D vector square.
    
    
    vector<vector<int>> square(4, vector<int>(4, 0));
    
    
    int num_row = square.size();
    int num_column = square[0].size();
    int k = 0;
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_column; j++) {
            square[i][j] = vec[k];
        }
        k = i * 4;
    }
    
    return square;
}

void print_square(const vector<vector<int>>& square) {
    /*This helper function is intend to print out matrix(square).
    Please implement your function here.
    You can use as many lines as you want
    */
    
    for (vector<int> row : square) {
        for (int u : row) {
            cout << u << " ";
        }
        cout << endl;
    }

}
bool is_magicsquare(const vector<vector<int>>& square) {
    /*Check the sums of the rows, columns, and diagonals.
    Please implement your function here.
    You can use as many lines as you want. */
    // Set up a boolean variable flag which reflects whether square is a magic square.
    bool flag = true;
    
    int diag1 = 0;
    int diag2 = 0;
    int rowsum = 0;
    int colsum = 0;
    int wholesum = 0;
    
    int num_row = square.size();
    int num_column = square[0].size();
    int sum = 0;
    
    for (int i = 0; i < num_row; i++) {
        rowsum= 0;
        for (int j = 0; j < num_column; j++) {
            rowsum = rowsum + square[i][j];
        }
        
        if(rowsum != 34){
            flag = false;
        }
    }
    
    for (int i = 0; i < num_row; i++) {
        colsum = 0;
        for (int j = 0; j < num_column; j++) {
            colsum = colsum + square[j][i];
        }
        if(colsum != 34){
            flag = false;
        }
    }
    
    for (int i = 0; i < num_row; i++) {
        diag1 = diag1 + square[i][i];
        diag2 = diag2 + square[i][square.size()-i];
    }
    
    if(diag1 != 34){
        flag = false;
    }

    if(diag2 != 34){
        flag = false;
    }
    
    return flag;
}
// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------


int main() {
    int input;
    vector<int> myvector;
    cout << "Please input a sequence of 16 different postive integers from 1,2,...,16, ending with Q:" << endl;
    // process input and assign the inputs to the vector myvector
    while (cin >> input) {
        myvector.push_back(input);
    }
    // Define a 4 by 4 2D vector mag_square.
    vector<vector<int>> mag_square(4, vector<int>(4, 0));
    // Write the vector to the 2D vector mag_square.
    mag_square = write_vector_to_square(myvector);
    cout << "The square is:" << endl;
    // print mag_square
    print_square(mag_square);
    // determine whether mag_square is a magic square
    bool flag = is_magicsquare(mag_square);
    if (flag) {
        cout << "This is a magic square." << endl;
    }
    else {
        cout << "This is not a magic square." << endl;
    }
    return 0;
}
