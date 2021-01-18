#include <iostream>
#include <../PacMan/Correc_Prof/type.h>

using namespace std;



void initPlayer(CMat & map, const CPosition & player) {
    map[player.first][player.second] = 'O';
}


void movePlayer(CMat & map, CPosition & player) {
    cout << "Entrez un déplacement : ";

    char choice;
    cin >> choice;

    // VERIFICATION CHAR DE MOUVEMENT

    choice = toupper(choice);

    map[player.first][player.second] = ' ';

    switch (choice)
        {
        case 'A':
            if (player.first == 0) {
                player.first = map.size()-1;
            } else {
                -- player.first;
            }

            if (player.second == 0) {
                player.second = map[player.first].size()-1;
            } else {
                -- player.second;
            }
            break;
        case 'Z':
            if (player.first == 0) {
                player.first = map.size()-1;
            }else {
                --player.first;
            }

            break;
        case 'E':
            if (player.first == 0) {
                player.first = map.size()-1;
            } else {
                -- player.first;
            }

            if (player.second == map[player.first].size()-1) {
                player.second = 0;
            } else {
                ++ player.second;
            }
            break;
        case 'Q':
            if (player.second == 0) {
                player.second = map[player.first].size()-1;
            } else {
                --player.second;
            }

            break;
        case 'D':
            if (player.second == map[player.first].size()-1) {
                player.second = 0;
            } else {
                ++player.second;
            }
            break;
        case 'W':

            if (player.first == map.size()-1) {
                player.first = 0;
            } else {
                ++ player.first;
            }
            if (player.second == 0) {
                player.second = map[player.first].size()-1;
            } else {
                -- player.second;
            }
            break;
        case 'X':
            if (player.first == map.size()-1) {
                player.first = 0;
            }else {
                ++player.first;
            }
            break;
        case 'C':

            if (player.first == map.size()-1) {
                player.first = 0;
            } else {
                ++ player.first;
            }

            if (player.second == map[player.first].size()-1) {
                player.second = 0;
            } else {
                ++ player.second;
            }
            break;
        }

        map[player.first][player.second] = 'O';
}
