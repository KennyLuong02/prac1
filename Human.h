// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
#include "Move.h"

using namespace std;

class Human: public Player {
    private:
    

    public:
        Human();
        Human(string name);
        Move* makeMove();
        string getName();
};



#endif