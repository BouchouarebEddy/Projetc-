#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "../PacMan/gameinit.h"

using namespace std;


void Displaytxt (const string & kfichier){
    ifstream text (kfichier);
    if (text.is_open() ==true){
        string line;
        while(getline(text,line)){
            cout << line <<endl;
        }
     }
    else {
        cout <<"DISPLAY ERROR"<<endl;
    }
}



void MenuUser() {

        string  pseudo;
        cout <<"Choisissez votre pseudo"<<endl;
        cin >> pseudo;
        string const menu("../PacMan/Nos_fichiers/menu.txt");
        Displaytxt(menu);
        cout <<"Your choice: "<<endl;
        int choice;
        cin >> choice;
        if (choice == 1){
            initGame();
        }
        if (choice == 2){
            cout <<"test 1"<<endl;
        }
        if (choice == 3){
            exit (0);
        }
        else {
            cout << "t nul";
        }
}


