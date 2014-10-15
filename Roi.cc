#include "Roi.h"

Roi::Roi(){
  //cout << "Constructeur par defaut: Roi" << endl;
}

Roi::~Roi(){
  //cout << "Destructeur Roi" << endl;
}

bool Roi::mouvementValide(Echiquier &e, int x, int y){
  return ( abs(this->getX()-x) == 1 && abs(this->getY()-y) == 0 || 
	   abs(this->getX()-x) == 0 && abs(this->getY()-y) == 1 || 
	   abs(this->getX()-x) == 1 && abs(this->getY()-y) == 1 );
}
