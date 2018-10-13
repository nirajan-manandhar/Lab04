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
    animal::move(x,y,z);
    this->z = z;
}

//Overridden sleep method for bird
void bird::sleep() {
    cout << "Bird is sleeping" << endl;
}

//Overridden eat method for bird
void bird::eat() {
    cout << "Peck Peck" << endl;
}

//Overloaded insertion operator for bird
ostream& operator<<(std::ostream& os, const bird& b)
{
    os << "ID: " << b.id << " Age: " << b.age << " Alive: " << b.alive << " X: " << b.x << " Y: " << b.y << " Z: " << b.z;
    return os;
}

