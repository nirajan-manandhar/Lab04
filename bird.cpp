//
// Created by Nirajan on 2018-10-12.
//

#include "bird.hpp"


//Default Constructor
bird::bird():animal(), z(0) {}

//Four Parameter Constructor
bird::bird(int age, double x, double y, double z) : animal(age, x, y), z(z) {}



//Overridden move method
void bird::move(double x, double y, double z)
{
    animal::move(x,y);
    this->z = z;
}

//Overridden sleep method for bird
void bird::sleep() {
    cout << "Bird is sleeping" << endl;
}

//Overridden eat method for bird
void bird::eat() {
    cout << "Bird Eating" << endl;
}

//Overloaded insertion operator for bird
ostream& operator<<(std::ostream& os, const bird& b)
{
    os << dynamic_cast<const animal&>(b) << " Z: " << b.z;
    return os;
}

