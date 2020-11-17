#pragma once
#define CREATURE_H
#include<string>
#include<vector>
#include<map>

class Creature
{
    int health;
public:
    Creature(int hp);
    std::string name;
    void set_name(std::string new_name);

};