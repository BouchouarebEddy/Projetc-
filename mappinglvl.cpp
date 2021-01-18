#include <iostream>
#include <fstream>
#include <string>
#include "Correc_Prof/gridmanagement.h"
#include "color.h"

using namespace std;




int mapping(){

ifstream ifs ("../test/map.txt");
string map;

while (getline(ifs,map)){
//        Color (KBleu);
        cout << map <<endl;
}
}

