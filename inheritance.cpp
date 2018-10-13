#include <iostream>

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {

    animal * a1 = new animal();
    animal * a2 = new bird();
    animal * a3 = new canine();


    animal * a4 = new animal(100, 30, 30);
    animal * a5 = new bird(56, 6.6, 7.4, 900);
    animal * a6 = new canine(2, 8, 8);

    cout << *a4 << endl;
    cout << *a5 << endl;
    cout << *a6 << endl;

    a1->move(5,5);//move animal
    cout << *a1 << endl;

    ((bird*)a2)->move(2,3,4);//move bird
    cout << *((bird*)a2) << endl;

    a3->move(6,6);//move canine
    cout << *a3 << endl << endl;

    a1->sleep();
    a2->sleep();
    a3->sleep();

    a1->eat();
    a2->eat();
    a3->eat();

    ((canine*)a3)->hunt();

    return 0;
}