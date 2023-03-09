/*
      PIC 10A Homework 7, RightTriangle.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/08/2023
*/

# include <iostream>
# include <cmath>
using namespace std;
// define the class RightTriangle below
class RightTriangle {
    
public:
    RightTriangle(); // a default constructor
    RightTriangle(int length1, int length2);
    
    double get_hypotenuse() const;
    double get_perimeter() const;
    double get_area() const;
    void resize(double factor);
private:
    int a, b;
    
};
// implement the member functions of RightTriangle class below
RightTriangle::RightTriangle(){
    a = 1;
    b = 1;
}
RightTriangle::RightTriangle(int length1, int length2){
    a = length1;
    b = length2;
}

double RightTriangle::get_hypotenuse() const {
    return sqrt(a*a + b*b);
}

double RightTriangle::get_perimeter() const {
    return (sqrt(a*a + b*b)) + a + b;
}

double RightTriangle::get_area() const {
    return (a * b / 2.0);
}

void RightTriangle::resize(double factor){
    a = a * factor;
    b = b * factor;
}

// Do not modify the main function
int main() {
    
    cout << "Please input the lengths of two catheti of the right triangle: ";
    double length1;
    double length2;
    cin >> length1;
    cin >> length2;
    
    cout << "Please input the resizing factor: ";
    double fac;
    cin >> fac;
    
    if (length1 > 0 && length2 > 0) {
        RightTriangle triangle(length1, length2);
        cout << "The hypotenuse of the right triangle = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle = " << triangle.get_area() << endl;
        triangle.resize(fac);
        cout << "The hypotenuse of the right triangle after resizing = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle after resizing = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle after resizing = " << triangle.get_area() << endl;
    }
    else {
        RightTriangle triangle;
        cout << "The hypotenuse of the right triangle = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle = " << triangle.get_area() << endl;
        triangle.resize(fac);
        cout << "The hypotenuse of the right triangle after resizing = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle after resizing = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle after resizing = " << triangle.get_area() << endl;
    }
}
