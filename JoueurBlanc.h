#ifndef JOUEURBLANC_H
#define JOUEURBLANC_H

#include <iostream>
#include "Joueur.h"
#include "Echiquier.h"
using namespace std;

class JoueurBlanc : public Joueur {
 private:
  
 public:
  JoueurBlanc(Echiquier &e);
  ~JoueurBlanc();
  JoueurBlanc(string nom);
};

#endif
