#include <iostream>
#include "Piece.h"
using namespace std;

class Joueur {
 private:
  string _nom;
  string _couleur;
  Piece tab[16];
 public:
  static int comp = 0;
  Joueur();
  ~Joueur();
  Joueur(string nom, string couleur);
 
};
