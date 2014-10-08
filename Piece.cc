#include "Piece.h"

Piece::Piece()
{
  cout << "Constructeur par defaut: Piece" << endl;
}

Piece::~Piece()
{
  cout << "Destructeur: Piece" << endl;
}

Piece::Piece(int x, int y, string nom)
{
  cout << "Contructeur avec parametre: Piece" << endl;
  _x = x;
  _y = y;
  _nom = nom;
}

void Piece::nomDePiece()
{
  cout << "je suis " << _nom << endl;
  cout << "ma position est " << _x << " " << _y << endl;
}

void Piece::setX(int x) {  _x = x; }

void Piece::setY(int y) {  _y = y; }

int Piece::getX() { return _x; }

int Piece::getY() { return _y; }


