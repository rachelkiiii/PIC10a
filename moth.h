/*
      PIC 10A Homework 7, moth.h
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/08/2023
*/

#ifndef MOTH_H
#define MOTH_H

// define the class Moth below
class Moth {
public:
    Moth(); // a default constructor
    Moth(double initial_position);
    
    void move_to_light(double light_position);
    double get_position() const;

private:
    double a; //initial position
    double b; //light position

};

#endif
