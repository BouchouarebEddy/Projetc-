#ifndef MAPMANAGEMENT_H
#define MAPMANAGEMENT_H
#include <../PacMan/Correc_Prof/type.h>
#include <string>
#include <vector>
typedef std::vector <char> CVLine;
typedef std::vector <CVLine> CMatrix;

void initMap(CMat & map);
void Displaymap(const std::string & Str);
CMatrix InjectTxtInMat (const std::string & Str, const unsigned & Size);

#endif // MAPMANAGEMENT_H
