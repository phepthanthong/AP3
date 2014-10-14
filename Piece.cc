#include "Piece.h"

Piece::Piece(){
  //cout << "Constructeur par defaut: Piece" << endl;
}

Piece::~Piece(){
  //cout << "Destructeur: Piece" << endl;
}

Piece::Piece(int x, int y, string nom){
  //cout << "Contructeur avec parametre: Piece" << endl;
  _x = x;
  _y = y;
  _nom = nom;
}

void Piece::infoPiece(){
  cout << "Nom : " << _nom << endl;
  cout << "Position : " << _x << " "  << _y << endl;
}

void Piece::setX(int x){  _x = x; }

void Piece::setY(int y){  _y = y; }

int Piece::getX(){  return _x;}

int Piece::getY(){  return _y;}

void Piece::setNom(string str)
{
  _nom = str;
}

string Piece::getNom()const{ return _nom;}

bool Piece::isWhite() const
{
  return estBlanc;
}

bool Piece::bonEndroit()
{
  return ( (_x>=0) && (_x<8)
	   && (_y>=0) && (_y<8) );
}

bool Piece::setCouleur(bool blanc){
  estBlanc = blanc;
}
