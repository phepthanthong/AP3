#ifndef REINE_H
#define REINE_H
#include "Piece.h"
#include "Echiquier.h"
#include "Tour.h"
#include "Fou.h"
#include <cmath>

using namespace std;

class Reine: public Tour, public Fou {
 private:

 public:
  Reine();
  ~Reine();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
