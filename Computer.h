// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include<string>
#include "Player.h"

using namespace std;


class Computer: public Player {
public:
    Computer();
    Move* makeMove() ;
    string getName();
};

#endif