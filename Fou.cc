#include "Fou.h"

Fou::Fou(){
  //cout << "Constructeur par defaut: Fou" << endl;
}

Fou::~Fou(){
  //cout << "Destructeur Fou" << endl;
}

bool Fou::mouvementValide(Echiquier &e, int x, int y){
  return ( abs(this->getX()-x) == abs(this->getY()-y) );
}
