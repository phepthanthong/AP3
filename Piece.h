#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include "Echiquier.h"
using namespace std;

class Echiquier;
class Piece {
 
 protected:
  int _x,_y;
  string _nom;
  bool estBlanc;

 public:
  Piece();
  ~Piece();
  Piece(int x, int y, string nom);
 
  void infoPiece();

  void setX(int x);
  void setY(int y);
  void setPosition(int x, int y);
  void setNom(string str);
  int getX();
  int getY();
  bool setCouleur(bool blanc);
  string getNom()const;
  bool isWhite()const;
  bool bonEndroit();

  virtual bool mouvementValide(Echiquier &e, int x, int y){};

};
#endif
