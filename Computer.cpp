// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include "Player.h"
#include "Computer.h"
#include "RPS.h"

Computer::Computer() {
    
}

Move* Computer::makeMove() {
    // Computer is always R
    return new Rock();
}

std::string Computer::getName() {
    return "Computer";
}