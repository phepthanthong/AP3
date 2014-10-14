#ifndef JOUEURNOIR_H
#define JOUEURNOIR_H
#include <iostream>
#include "Joueur.h"
using namespace std;

class JoueurNoir: public Joueur {
 private:
  //string _nomJN;

 public:
  JoueurNoir();
  ~JoueurNoir();
  JoueurNoir(string nom);

};

#endif
