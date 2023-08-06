// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef MNPRZ_H
#define MNPRZ_H
#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Monkey: public Move {
    public:
        Monkey();
        Monkey(string na);
        string getName();
        int win_against(const string& na);

};

class Ninja: public Move {
    public:
        Ninja();
        Ninja(string na);
        string getName();
        int win_against(const string& na);

};

class Pirate: public Move {
    public:
        Pirate();
        Pirate(string na);
        string getName();
        int win_against(const string& na);

};

class Robot: public Move {
    public:
        Robot();
        Robot(string na);
        string getName();
        int win_against(const string& na);

};

class Zombie: public Move {
    public:
        Zombie();
        Zombie(string na);
        string getName();
        int win_against(const string& na);

};

#endif