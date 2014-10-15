#ifndef CAVALIER_H
#define CAVALIER_H
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;

class Cavalier : public Piece {
 private:

 public:
  Cavalier();
  ~Cavalier();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
