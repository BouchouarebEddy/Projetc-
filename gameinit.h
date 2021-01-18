#ifndef GAMEINIT_H
#define GAMEINIT_H
#include "./Correc_Prof/type.h"
void initGame();
void checkVictory (const CPosition & player, const CPosition & enemy, const bool & state, bool & victory);
#endif // GAMEINIT_H
