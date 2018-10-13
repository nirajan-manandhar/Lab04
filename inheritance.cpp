#include <iostream>

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {

    animal * a1 = new animal();
    animal * a2 = new bird();
    animal * a3 = new canine();






    std::cout << "Hello, World!" << std::endl;
    return 0;
}