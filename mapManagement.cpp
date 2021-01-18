#include <iostream>
#include "../PacMan/Correc_Prof/type.h"
#include <fstream>
#include "../PacMan/Correc_Prof/params.h"


using namespace std;

typedef vector <char> CVLine;
typedef vector <CVLine> CMatrix;


void initMap(CMat & map) {
    for (size_t row = 0; row < 10; ++row) {
        CVLine line = {};
        for (size_t col = 0; col < 10 ; ++col) {
            line.push_back(' ');
        }
        map.push_back(line);
    }
}



void Displaymap (const string & Str) // Afficher un .txt à l'écran
{
   ifstream ifs (Str); // Ouvre le fichier
   while (true)
   {
       string Ligne;
       getline (ifs, Ligne); // Lit une ligne du fichier et la stock dans Ligne
       if (ifs.eof()) break; // Si on est à la fin on sort
       cout << Ligne << endl; // Sinon on affiche la ligne
   }
}

CMatrix InjectTxtInMat (const string & Str, const unsigned & Size) // Mettre un .txt dans une matrice
{
    CMatrix Mat;
    char a;
    Mat.resize(Size+1); // Taille redéfini

    ifstream ifs (Str); // Ouverture du fichier
    for (unsigned i = 0; i<Mat.size() ; ++i)
    {
        Mat[i].resize(Size); // Taille de la ligne
        for (unsigned j = 0; j<Mat[i].size() ; ++j)
        {
            ifs.get(a); // Lit un caractère
            if (ifs.eof()) break;
            Mat[i][j] = a;
        }
    }
    return Mat;
}
