#include "creature.h"
#include<string>
#include<vector>
#include<iostream>


int main(){

    Creature frank = Creature(23);
    frank.set_name("Steve");
    std::cout << "Frank's name is now " << frank.name << std::endl;

    return 0;
}