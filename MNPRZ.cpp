// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include <iostream>
#include <string>
#include "MNPRZ.h"

using namespace std;

string Monkey::getName() {
    return name;
}

int Monkey::win_against(const string& na) {
    if ((na == "Robot") || (na == "Ninja")) {
        return 1;
    } else if (na == "Monkey") {
        return -1;
    }

    return 0;
}


string Ninja::getName() {
    return name;
}

int Ninja::win_against(const string& na) {
    if ((na == "Zombie") || (na == "Pirate")) {
        return 1;
    } else if (na == "Ninja") {
        return -1;
    }

    return 0;
}


string Pirate::getName() {
    return name;
}

int Pirate::win_against(const string& na) {
    if ((na == "Robot") || (na == "Monkey")) {
        return 1;
    } else if (na == "Pirate") {
        return -1;
    }

    return 0;
}


string Robot::getName() {
    return name;
}

int Robot::win_against(const string& na) {
    if ((na == "Zombie") || (na == "Ninja")) {
        return 1;
    } else if (na == "Robot") {
        return -1;
    }

    return 0;
}

string Zombie::getName() {
    return name;
}

int Zombie::win_against(const string& na) {
    if ((na == "Monkey") || (na == "Pirate")) {
        return 1;
    } else if (na == "Zombie") {
        return -1;
    }

    return 0;
}