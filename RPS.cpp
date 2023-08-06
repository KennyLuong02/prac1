// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include <iostream>
#include <string>
#include "RPS.h"

using namespace std;

string Rock::getName() {
    return name;
}

int Rock::win_against(const string& na) {
    if (na == "Scissors") {
        return 1;
    } else if (na == "Rock") {
        return -1;
    }

    return 0;
}


string Paper::getName() {
    return name;
}

int Paper::win_against(const string& na) {
    if (na == "Rock") {
        return 1;
    } else if (na == "Paper") {
        return -1;
    }

    return 0;
}


string Scissors::getName() {
    return name;
}

int Scissors::win_against(const string& na) {
    if (na == "Paper") {
        return 1;
    } else if (na == "Rock") {
        return -1;
    }

    return 0;
}
