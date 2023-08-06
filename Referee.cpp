// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RPS.h"
#include "Move.h"
#include "MNPRZ.h"

using namespace std;

Referee::Referee() {

}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        return nullptr;
    } else if (move1->win_against(move2->getName())){
        return player1;
    } else {
        return player2;
    }
    // if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'R')) {
    //     win = 0;
    // } else if ((player1->makeMove() == 'S') &&(player2->makeMove() == 'R')) {
    //     win = 2;
    // } else if ((player1->makeMove() == 'P') &&(player2->makeMove() == 'R')) {
    //     win = 1;
    // }  else if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'S')) {
    //     win = 1;
    // } else if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'P')) {
    //     win = 2;
    // }

    // if (a == 'Scissors') {
    //     win = 2;
    // } else if (a == 'Rock') {
    //     win = 0;
    // } else if (a == 'Paper') {
    //     win = 1;
    // }  else {
    //     win = 0;
    // }

    // if (win == 1) {
    //     // cout << player1->getName() << " Wins." << endl;
    //     return player1;
    // } else if (win == 2) {
    //     // cout << player2->getName() << " Wins." << endl;
    //     return player2;
    // } else if (win == 0) {
    //     // cout << "It's a Tie." << endl;
    //     return nullptr;
    // } else {
    //     return nullptr;
    // }
}