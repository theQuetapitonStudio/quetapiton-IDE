#include <iostream>
#include <direct.h>
#include <string>
#include "libs/createfile.hpp"

using namespace std;

int main() {
    string comando;
    while (1) {
        cout << "\n>";
        cin >> comando;
        if (comando == "156") {
            cout << "Erromadeite is red\n";
        } else if (comando == "clear") {
            system("clear");
        } else if (comando == "github") {
            cout << "https://github.com/theQuetapitonStudio/quetapiton-IDE/tree/main/erromadeite-terminal \n";
        }
    }   
}