#ifndef JOUEURNOIR_H
#define JOUEURNOIR_H

#include <iostream>
#include "Joueur.h"
#include "Echiquier.h"
using namespace std;

class JoueurNoir: public Joueur {
 private:
  
 public:
  JoueurNoir(Echiquier &e);
  ~JoueurNoir();
  JoueurNoir(string nom);

};

#endif
