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
    canine(const canine& c) = default; //Copy constructor
    ~canine() = default;//Destructor

    //Move method
    void move(double, double) override;

    //Sleep method
    void sleep() override;

    //Eat Method
    void eat() override;

    //Hunt method
    void hunt();

    //Overloaded insertion operator for canine
    friend std::ostream& operator<<(std::ostream& os, const canine& c);




};


#endif //LAB4_CANINE_HPP
