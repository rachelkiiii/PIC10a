/*
      PIC 10A Homework 7, moth.cpp
      Author: Rachel Ki
      UID: 005590842
      Discussion Section: 2C
      Date: 03/08/2023
*/

#include "moth.h"

// implement the member functions of the Moth class below
//implement member function

//initial position and light position, final position
Moth::Moth(){
    a = 0; //initial position
    b = 0;
}
Moth::Moth(double initial_position){
    a = initial_position;
    b = initial_position;
}

void Moth::move_to_light(double light_position){
    
    if(light_position == a){
        a = light_position;
        b = light_position;
    } else {
        b = light_position;
        a += (b-a)/2.0;
        
    }
    
}

double Moth::get_position() const{
    return a;
}
