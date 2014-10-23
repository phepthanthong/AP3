#include "Reine.h"

Reine::Reine(){
  //cout << "Constructeur par defaut: Reine" << endl;
}

Reine::~Reine(){
  //cout << "Destructeur: Reine" << endl;
}

bool Reine::mouvementValide(Echiquier &e, int x, int y){
  return ( Tour::mouvementValide(e,x,y) || Fou::mouvementValide(e,x,y);
}
