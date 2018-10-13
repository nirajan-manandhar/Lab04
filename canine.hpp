//
// Created by Nirajan on 2018-10-12.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

class canine:public animal {
public:
    canine();//Default constructor
    canine(int, double, double);//Three parameter constructor

    //Move method
    void move(double, double);

    //Sleep method
    void sleep();

    //Eat Method
    void eat();

    //Hunt method
    void hunt();

    //Overloaded insertion operator for canine
    friend std::ostream& operator<<(std::ostream& ostream, const canine& c);




};


#endif //LAB4_CANINE_HPP
