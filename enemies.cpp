#include <iostream>
#include <../PacMan/Correc_Prof/type.h>
using namespace std;



void initEnemy(CMat & map, const CPosition & enemy) {
    map[enemy.first][enemy.second] = 'M';
}


void moveEnemy(CMat & map, const CPosition & player, CPosition & enemy, bool state) {
    map[enemy.first][enemy.second] = ' ';
    if (state) {
        if (player.first == enemy.first) {
            if (player.second < enemy.second) {
                --enemy.second;
            } else {
                ++enemy.second;
            }
        } else if (player.second == enemy.second) {
            if (player.first < enemy.first) {
                --enemy.first;
            } else {
                ++enemy.first;
            }
        } else {
            if ((player.first - enemy.first) < (player.second - enemy.second)) {
                if (player.first < enemy.first) {
                    --enemy.first;
                } else {
                    ++enemy.first;
                }
            } else {
                if (player.second < enemy.second) {
                    --enemy.second;
                } else {
                    ++enemy.second;
                }
            }
        }
    }

    // Faire l'inverse du if ligne 15
    // NE pas oublier dans ce cas la vérification dépassement de la matrice (pas nécessaire entre les lignes 16 et 41)

    cout << enemy.first << enemy.second << endl;
    map[enemy.first][enemy.second] = 'M';
}
