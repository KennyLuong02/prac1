// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Move.h"

using namespace std;

class Player {
    protected:
        // char move;
        string name;
    public:
        // virtual char makeMove() = 0;

        virtual Move* makeMove() = 0;

        virtual string getName() = 0;
        // virtual void setMove(char M) = 0;
        // virtual void setName(string na) = 0;

        // virtual char makeMove() = 0;
        // virtual string getName() = 0;


};


#endif