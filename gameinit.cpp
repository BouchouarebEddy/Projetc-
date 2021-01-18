#include <iostream>
#include "../PacMan/Correc_Prof/type.h"
#include "enemies.h"
#include "player.h"
#include "../PacMan/mapManagement.h"



using namespace std;

// void moveEnemy(CMat & map, const CPosition & player, CPosition & enemy, bool state);

void checkVictory(const CPosition & player, const CPosition & enemy, const bool & state, bool & victory);
void initGame() {

    CMat map;
    InjectTxtInMat("../PacMan/Nos_fichiers/map1.txt", 16);
    CPosition player(9,0);
    CPosition enemy(0,9);

//    initMap(map);
    initEnemy(map, enemy);
    initPlayer(map, player);

    Displaymap("../PacMan/Nos_fichiers/map1.txt");


    bool isVictory = false;

    while (!isVictory) {
        movePlayer(map, player);
        moveEnemy(map, player, enemy, true);

        Displaymap("../PacMan/Nos_fichiers/map1.txt");

        checkVictory(player, enemy, true, isVictory);
    }
}


void checkVictory(const CPosition & player, const CPosition & enemy, const bool & state, bool & victory) {
    if (player.first == enemy.first && player.second == enemy.second) {
        if (state) {
            victory = true;
            cout << "You loose you should play Minecraft maybe you'll be better" << endl;
        } else {
            victory = true;
            cout << "I don't know how but you are very good GG !" << endl;
        }
    }

}

