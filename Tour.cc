#include "Tour.h"

Tour::Tour(){
  //cout << "Constructeur par defaut: Tour" << endl;
  //_nom = "T";
}

Tour::~Tour(){
  //cout << "Destructeur: Tour" << endl;
}

bool Tour::mouvementValide(Echiquier &e, int x, int y){
  /*if ( e.getPiece(_x,_y).getX() == _x &&
       e.getPiece(_x,_y).getY() == _y && 
       getX() == x && getY() == y )*/

  if ( this->getX() == x && this->getY() == y )
    return true;
  else return false;
}
