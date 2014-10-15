#ifndef PION_H
#define PION_H
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;

class Pion : public Piece {
 private:

 public:
  Pion();
  ~Pion();

  virtual bool mouvementValide(Echiquier &e, int x, int y);
};

#endif  
