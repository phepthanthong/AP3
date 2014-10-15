#include "Tour.h"

Tour::Tour(){
  //cout << "Constructeur par defaut: Tour" << endl;
  //_nom = "T";
}

Tour::~Tour(){
  //cout << "Destructeur: Tour" << endl;
}

bool Tour::mouvementValide(Echiquier &e, int x, int y){
  return ( abs(this->getX()-x) > 1 && abs(this->getY()-y) == 0 || abs(this->getX()-x) == 0 && abs(this->getY()-y) > 1 );
}
