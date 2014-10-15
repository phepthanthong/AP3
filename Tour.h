#ifndef TOUR_H
#define TOUR_H
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;

class Tour: virtual public Piece {
 private:

 public:
  Tour();
  ~Tour();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
