// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Robot: public Move {
    protected:

    public:
        string getName(); 
        void setName(string na);

        int win_against(string name);

};

#endif