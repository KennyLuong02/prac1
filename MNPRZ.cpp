// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#include <iostream>
#include <string>
#include "MNPRZ.h"

using namespace std;

Monkey::Monkey() {
    name = "Monkey";
}

Monkey::Monkey(string na) {
    name = na;
}

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


Ninja::Ninja() {
    name = "Ninja";
}

Ninja::Ninja(string na) {
    name = na;
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


Pirate::Pirate() {
    name = "Pirate";
}

Pirate::Pirate(string na) {
    name = na;
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


Robot::Robot() {
    name = "Robot";
}

Robot::Robot(string na) {
    name = na;
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


Zombie::Zombie() {
    name = "Zombie";
}

Zombie::Zombie(string na) {
    name = na;
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