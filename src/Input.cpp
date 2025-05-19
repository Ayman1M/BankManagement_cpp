//
// Created by ayman on 5/18/25.
//

#include "../lib_h/Input.h"

long long Input::getInt() {
    long long x;
    std::cin >> x;
    while (std::cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> x;
    }
    return x;
}
double Input::getDouble() {
    double x;
    std::cin >> x;
    return x;
}
bool Input::getBool() {
    bool x;
    std::cin >> x;
    while (std::cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> x;
    }
    return x;
}
char Input::getChar() {
    char x;
    std::cin >> x;
    while (std::cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> x;
    }
    return x;
}
std::string Input::getString() {
    std::string x;
    getline(cin, x);
    return x;
}
