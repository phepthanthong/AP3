#include <iostream>
using namespace std;

class Piece {
 private: 
  int _x, _y;
  string _nom;
  bool estBlanc;
 public:
  Piece();
  ~Piece();
  Piece(int x, int y, string nom);
  void nomDePiece();

  void setX(int x);
  void setY(int y);
  int getX();
  int getY();
 
};
