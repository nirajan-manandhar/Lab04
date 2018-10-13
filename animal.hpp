//
// Created by Nirajan on 2018-10-11.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>

using namespace std;

class animal
{
protected:
    int age;
    long id;
    bool alive;
    double x;
    double y;
public:
    static long counter;
    animal();   //Default constructor
    animal(int, double, double); //Three parameter constructor
    animal(const animal& a) : age(age), id(id), alive(alive), x(x), y(y) {} //Copy constructor

    virtual void move(double, double, double = 0); //Moves the animals by changing coordinates.

    virtual ~animal();//Destructor

    virtual void sleep();
    virtual void eat();

    friend ostream& operator<<(ostream& os, const animal& dt);
};


#endif //LAB4_ANIMAL_HPP
