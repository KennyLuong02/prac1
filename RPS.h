// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef RPS_H
#define RPS_H
#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

// template
// unorder_map<string, Move> umap;

class Rock: public Move {
    public:
        string getName(); 
        // virtual void setName(string na) = 0;
        int win_against(const string& na);

};

class Paper: public Move {
    public:
        string getName(); 
        // virtual void setName(string na) = 0;
        int win_against(const string& na);

};

class Scissors: public Move {
    public:
        string getName(); 
        // virtual void setName(string na) = 0;
        int win_against(const string& na);

};

#endif