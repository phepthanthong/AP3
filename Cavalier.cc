#include "Cavalier.h"

Cavalier::Cavalier(){
  //cout << "Constructeur par defaut: Cavalier" << endl;
}

Cavalier::~Cavalier(){
  //cout << "Destructeur Cavalier" << endl;
}

bool Cavalier::mouvementValide(Echiquier &e, int x, int y){
  return ( abs(this->getX()-x) == 1 && abs(this->getY()-y) == 2 || abs(this->getX()-x) == 2 && abs(this->getY()-y) == 1 );
}
