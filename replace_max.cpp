/*
      PIC 10A Homework 8, replace_max.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/19/2023
*/

# include <iostream>

using namespace std;


// The function replaces the largest value(s) in the array arr by x
// You MUST use pointer to reach your goal.
void replace(double* arr, double x, int size_array) {
    // implement your function here
    
    double current_max = *arr;
    int current_max_index = 0;
    
    for(int i = 1; i < size_array; i++){
        if(*(arr+i) > current_max){
            current_max_index = i;
            current_max = *(arr + i);
        }
    }
    
    for(int i = 1; i < size_array; i++){
        if(*(arr+i) == current_max){
            *(arr + i) = x;
        }
    }

}



// Do not modify the main function
int main() {
    // The CAPACITY of array is 10.
    const int CAPACITY = 10;
    double arr[CAPACITY];

    // Input the size of the array.
    int size_array;
    cout << "Input the size of your input array (no larger than 10):" << endl;
    cin >> size_array;

    // Input the array
    cout << "Input the numbers in the array:" << endl;
    for (int k = 0; k < size_array; k++) {
        cin >> arr[k];
    }

    // Input x
    double x;
    cout << "Inpute number x: ";
    cin >> x;

    // Call the function replace_if_greater.
    replace(arr, x, size_array);

    // Output the new array
    cout << "The new array is now:" << endl;
    for (int k = 0; k < size_array; k++) {
        cout << arr[k] << ",";
    }

    return 0;
}

