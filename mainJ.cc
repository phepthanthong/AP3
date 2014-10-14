#include <iostream>
#include "Piece.h"
#include "Joueur.h"
#include "JoueurNoir.h"
#include "JoueurBlanc.h"
#include "Echiquier.h"
using namespace std;

bool comparerPiece(Piece &p1,Piece &p2){
  if ( ( p1.getX() == p2.getX() ) && ( p1.getY() == p2.getY() ) )
    cout << " TRUNG NHAU  " << endl; 
  else 
    cout << " KHONG TRUNG NHAU " << endl;
}

int main(){
  //Joueur j;
  //Joueur k("HIEU",true);
  //JoueurNoir n("Loc");
  JoueurBlanc o("Long");
  //j.infoJoueur();
  //k.infoJoueur();
  //n.infoJoueur();
  o.infoJoueur();
  Echiquier e;
  e.affiche();
}
