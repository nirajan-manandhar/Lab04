//
// Created by Nirajan on 2018-10-11.
//

#include "animal.hpp"


long animal::counter = 0;

//Default Constructor
animal::animal() : alive(true), age(0), x(0), y(0) {
    id = counter++;
}

//Three parameter constructor
animal::animal(int age, double x, double y) : alive(true), age(age), x(x), y(y) {
    id = counter++;
}

//Move method of an animal
void animal::move(double x, double y, double z) {
    this->x = x;
    this->y = y;
}

void animal::sleep() {
    cout << "Animal is sleeping" << endl;
}

void animal::eat() {
    cout << "Animal is eating" << endl;
}

//Overloaded insertion operator for animal
ostream& operator<<(ostream& os, const animal& an) {
    os << "ID: " << an.id << " Age: " << an.age << " Alive: " << an.alive << " X: " << an.x << " Y: " << an.y;
    return os;
}




