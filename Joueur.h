#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include "Piece.h"

using namespace std;

class Joueur {

  //private:
 protected:
  string _nom;
  bool _estBlanc;
  Tour t[2];
  //Piece _tab[16];

 public:
  static int comp;
  Joueur();
  ~Joueur();
  Joueur(string nom, bool estBlanc);
  void infoJoueur();
};
#endif
