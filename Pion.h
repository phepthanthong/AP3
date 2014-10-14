#ifndef PION_H
#define PION_H
#include <iostream>
#include "Piece.h"
#include "Echiquier.h"

class Pion : public Piece {
 private:

 public:
  Pion();
  ~Pion();

  virtual bool mouvementValide(Echiquier &e, int x, int y);
};

#endif  
