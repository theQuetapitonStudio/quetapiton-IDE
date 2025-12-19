#include <iostream>
#include <direct.h>
#include <string>
#include "libs/createfile.hpp"
#include "libs/createrandom_string.hpp"

using namespace std;

int main() {
    string comando;
    system("title Erromadeite terminal");

    while (1) {
        cout << "\n>";
        getline(cin, comando);
        if (comando == "156") {
            cout << "Erromadeite is red\n";
        } else if (comando == "clear") {
            system("cls");
        } else if (comando == "github") {
            cout << "https://github.com/theQuetapitonStudio/quetapiton-IDE/tree/main/erromadeite-terminal \n";
        } else if (comando == "execute createkey") {
            cout << "Your key " << randomString(30) << "\n";
        } else if (comando == "execute createtxt") {
            _mkdir("txt");
            _chdir("txt");
            createFile("Your text here \n your subtext here", "yf.txt");
            _chdir("..");
        } else if (comando == "execute createbat") {
            _mkdir("batch-scripts");
            _chdir("batch-scripts");
            createFile("@echo off", "app.bat");
            _chdir("..");
        } else {
            cout << "invalid comand\n";
        }
    }   
}