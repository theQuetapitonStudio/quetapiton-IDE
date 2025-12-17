#include <iostream>
#include <string>
#include <direct.h>
#include "comand_scripts/detectcomand.hpp"
#include "libs/dir.hpp"

using namespace std;
using namespace tdir;

int main() {
    _chdir("C:\\");
    _mkdir("erromadeite_terminal");
    float version = 0.01f;
    cout << "Erromadeite Terminal [version: " << version << "]\n";
    while (1) {
        string comando;

        cout << tdir::direc << ">";

        getline(cin, comando);
        detectcomand(comando);
    }        
}