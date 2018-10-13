//
// Created by Nirajan on 2018-10-12.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP


#include "animal.hpp"


class bird: public animal {
private:
    double z;
public:
    bird(); //Default constructor
    bird(int, double, double, double); //Four parameter constructor
    bird(const bird& b) = default; //Copy constructor
    ~bird() = default;//Destructor

    void move(double, double, double); //Overriding Move constructor
    void eat() override; //Overriding eat method
    void sleep() override; //Overriding sleep method

    //Overloaded insertion operator for bird
    friend std::ostream& operator<<(std::ostream& ostream, const bird& b);
};


#endif //LAB4_BIRD_HPP
