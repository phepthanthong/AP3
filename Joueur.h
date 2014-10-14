#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include "Piece.h"
#include "Tour.h"
#include "Fou.h"
#include "Pion.h"
#include "Cavalier.h"
using namespace std;

class Joueur {
  
 protected:
  string _nom;
  bool _estBlanc;
  Tour t[2];
  Fou f[2];
  Cavalier c[2];
  Pion p[8];
  //Piece _tab[16];

 public:
  static int comp;
  Joueur();
  ~Joueur();
  Joueur(string nom, bool estBlanc);
  void infoJoueur();
};
#endif
