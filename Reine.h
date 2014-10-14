#ifndef REINE_H
#define REINE_H
#include "Piece.h"
#include "Echiquier.h"

using namespace std;

class Reine: public Piece {
 private:

 public:
  Reine();
  ~Reine();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
