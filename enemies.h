#ifndef ENEMIES_H
#define ENEMIES_H
#include "../PacMan/Correc_Prof/type.h"


void initEnemy(CMat & map, const CPosition & enemy);
void moveEnemy(CMat & map, const CPosition & player, CPosition & enemy, bool state);
#endif // ENEMIES_H
