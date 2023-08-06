// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "RPS.h"
#include "MNPRZ.h"

using namespace std;

Human::Human() {
    name = "Human";
}

Human::Human(string name) {
    this->name = name;
}

Move* Human::makeMove() {
    string m_move;
    // cout << "Enter move: ";
    cin >> m_move;

    if (m_move == "Rock")
    {
        return new Rock();
    }
    else if (m_move == "Paper")
    {
        return new Paper();
    }
    else if (m_move == "Scissors")
    {
        return new Scissors();
    }
    else if (m_move == "Monkey")
    {
        return new Monkey();
    }
    else if (m_move == "Robot") 
    {
        return new Robot();
    }
    else if (m_move == "Pirate") 
    {
        return new Pirate();
    }
    else if (m_move == "Ninja") 
    {
        return new Ninja();
    } 
    else if (m_move == "Zombie") 
    {
       return new Zombie();
    } 
    else 
    {
        std::cout << "Invalid move. Please try again.\n";
        return makeMove();
    }

    
}

string Human::getName() {
    return name;
}