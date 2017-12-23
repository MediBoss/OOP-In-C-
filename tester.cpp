#include <iostream>
#include <string>
#include "implementation.cpp"

using namespace std;

int main(){


    Animal obj1("simba","mammal","Tundra","Carnivore",false,12);
    Animal obj2(obj1); // ussing the copy constructor


    obj1.printAnimalInfo();
    obj2.printAnimalInfo();



    return 0;
}

