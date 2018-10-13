//
// Created by Nirajan on 2018-10-12.
//

#include "canine.hpp"


//Default constructor
canine::canine():animal(){}

//Three parameter constructor
canine::canine(int age, double x, double y): animal(age, x, y){}


//Move Method
void canine::move(double x, double y) {
    animal::move(x,y);
}

//Sleep method
void canine::sleep() {
    cout << "Canine sleeping" << endl;
}

//Eat method
void canine::eat() {
    cout << "Canine Eating" << endl;
}

void canine::hunt() {
    cout << "Canine hunting" << endl;
}

//Overloaded insertion operator for bird
std::ostream& operator<<(std::ostream& os, const canine& c) {
    os << c;
    return os;
}








