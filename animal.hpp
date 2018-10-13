//
// Created by Nirajan on 2018-10-11.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>
#include <ostream>

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
    animal(const animal& a); //Copy constructor

    virtual void move(double, double); //Moves the animals by changing coordinates.

    virtual ~animal() = default;//Destructor

    virtual void sleep();//Sleep Mehod
    virtual void eat();//Eat Method

    friend ostream& operator<<(ostream& os, const animal& dt);
};


#endif //LAB4_ANIMAL_HPP
