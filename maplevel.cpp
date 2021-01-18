#include <iostream>
#include <fstream>
#include <string>
#include "Correc_Prof/type.h"

using namespace std;


CMat initMat(unsigned level) {
  ifstream ifs("../PacMan/Nos_fichiers/text"+to_string(level)+".txt");



  if (ifs.is_open()) {
    CMat mapMatrix = {};
    string mapLine;
    CVLine line;
    while (getline(ifs, mapLine)) {
      line = {};
      for (size_t i = 0; i < mapLine.size(); ++i) {
        line.push_back(mapLine[i]);
      }
      mapMatrix.push_back(line);
    }

   return mapMatrix;
  }
}
