#include <iostream>
#include "Piece.h"

using namespace std;

int main(){
  Piece p;
  Piece n(2, 1, "ROI");
  n.infoPiece();
  n.setX(10);
  n.setY(5);
  cout << n.getX() << endl;
  cout << n.getY() << endl;

  Piece pi[4];
}
