#include <iostream>
#include <string>
#include "execute.hpp"
#include "../libs/createfile.hpp"
#include <direct.h>

using namespace std;

inline void detectcomand(string comando) {
    if (comando == "about") {
        cout << "Made for storing important things and practicing C++,\n made by quetapiton only. \n";
    } else if (comando == "clear") {
        system("cls");
    } else if (comando == "execute createkey") {
        cout << "Command under development!\n";
    } else if (comando == "execute github") {

    }
}