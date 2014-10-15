#ifndef FOU_H
#define FOU_H

#include "Piece.h"
#include "Echiquier.h"
#include <cmath>
using namespace std;

class Fou : virtual public Piece {
 private:

 public:
  Fou();
  ~Fou();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
