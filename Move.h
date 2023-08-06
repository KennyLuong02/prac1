// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>

using namespace std;

// template
// unorder_map<string, Move> umap;

class Move {
    protected:
        string name;

    public:
        virtual string getName() = 0; 
        // virtual void setName(string na) = 0;
        virtual int win_against(const string& name) = 0;

};

#endif