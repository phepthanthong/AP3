#include "Pion.h"

Pion::Pion(){
  //cout << "Constructeur par defaut: Pion" << endl;
}

Pion::~Pion(){
  //cout << "Destructeur Pion" << endl;
}

bool Pion::mouvementValide(Echiquier &e, int x, int y){
  bool premierCoup;

  //Pion Blanc
  if (this->isWhite()){
    if ( _x == (x+1) || _x == (x-1) && _y == (y-1) ){
      if (e.getPiece(x,y) != 0){
	if (estBlanc != e.getPiece(x,y)->isWhite()){
	  return true;
	}
	else return false;
      }
      else return false;
    }
    else
      //Deplacement standart
      if (_x == x){
	//Verifie que l'emplacement est vide
	if (e.getPiece(x,y) != 0)
	  return false;
	else {	  
	  //Autorise le saut d'une case au premier tour
	  if (premierCoup){
	    if ( _y - y == (-2) || _y - y == (-1) ){
	      premierCoup = false;
	      return true;
	    }
	  }
	  else //Sinon aucun saut
	    if ( _y - y == (-1) )
	      return true;
	  return false;
	}
      }
      else 
	return false;
  }
  //Pion Noir
  else{
    if ( ( _x == (x+1) || _x == (x-1) ) && _y == (y+1) ){
      if (e.getPiece(x,y) != 0){
	if (estBlanc != e.getPiece(x,y)->isWhite())
	  return true;
	else return false;
      }
      else return false;
    }
    else
      if ( _x == x ){
	if (e.getPiece(x,y) != 0)
	  return false;
	else {
	  if (premierCoup){
	    if ( _y - y == 2 || _y - y == 1 ){
	      premierCoup = false;
	      return true;
	    }
	  }
	  else 
	    if ( _y - y == 1 )
	      return true;
	  return false;
	}
      }
      else return false;
  }
}
