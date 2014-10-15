#ifndef ROI_H
#define ROI_H
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;

class Roi : public Piece {
 private:

 public: 
  Roi();
  ~Roi();

  virtual bool mouvementValide(Echiquier &e, int x, int y);

};

#endif
