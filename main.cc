#include <iostream>
#include "Piece.h"
using namespace std;

int main()
{
  Piece p;
  Piece ce(2,1,"le roi");
  ce.nomDePiece();
  ce.setX(10);
  ce.setY(5);
  cout << ce.getX() << endl;
  cout << ce.getY() << endl;

  Piece pi[4];
}
