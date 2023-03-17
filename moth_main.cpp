/*
      PIC 10A Homework 7, moth_main.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/08/2023
*/

// Do not edit this file.
#include "moth.h"
#include <iostream>
#include <cmath>

using namespace std;

class Tester {
public:
    // Checks answer and prints success or failed
    bool test(double got, double expected);
private:
    size_t test_num = 1;
    double thresh = 1.0 / 1024.0;
};

bool Tester::test(double got, double expected) {
    cout << "====  Test case " << test_num << "  ====" << endl;

    bool success = true;

    if (abs(got - expected) >= thresh) {
        cout << "Not passed yet. Keep trying!" << endl;
        cout << "        Got: " << got << endl;
        cout << "   Expected: " << expected << endl;
        success = false;
        cout << endl;
    }

    if (success) {
        cout << "Passed." << endl << endl;
    }

    test_num++;

    return success;
}

int main() {

    Tester tester;

    bool all_passed = true;

    // Test case 1
    Moth moth1 = Moth(0);
    moth1.move_to_light(10);
    moth1.move_to_light(10);
    bool test_case_passed = tester.test(moth1.get_position(), 7.5);
    all_passed = test_case_passed && all_passed;

    // Test case 2
    Moth moth2 = Moth(12.5);
    moth2.move_to_light(-5.7);
    test_case_passed = tester.test(moth2.get_position(), 3.4);
    all_passed = test_case_passed && all_passed;

    // Test case 3
    Moth moth3 = Moth(0);
    moth3.move_to_light(100);
    moth3.move_to_light(100);
    moth3.move_to_light(-100);
    test_case_passed = tester.test(moth3.get_position(), -12.5);

    // Test case 4
    Moth moth4 = Moth(100);
    moth4.move_to_light(100);
    moth4.move_to_light(100);
    moth4.move_to_light(100);
    test_case_passed = tester.test(moth4.get_position(), 100);
    all_passed = test_case_passed && all_passed;

    // Test case 5
    Moth moth5 = Moth(-100);
    moth5.move_to_light(0);
    moth5.move_to_light(0);
    moth5.move_to_light(0);
    moth5.move_to_light(0);
    test_case_passed = tester.test(moth5.get_position(), -6.25);
    all_passed = test_case_passed && all_passed;

    if (all_passed) {
        cout << "Hooray, you passed all tests!" << endl;
    }

    return 0;
}
