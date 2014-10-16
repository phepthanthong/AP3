#include <iostream>
#include <cstdlib>
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

void menu(){
  cout << "\t\t\t JEU D'ECHEC \n"
       << "\t 1. Choisissez une piece (Entrez ses coordonnees!) \n";
  cout << "\t 2. Entrez les coordonnees souhaitees \n";
  cout << "\t 3. Quitter \n ";
  cout << "\t\t Votre choix: \n";

}



int main()
{
  bool quit = false;

  while(!quit){
    char a;
    system("clear");
    Echiquier e;
    JoueurNoir o(e);
    JoueurBlanc k(e);
    e.affiche(); 
    menu();
    cin >> a;

    switch (a){
    case '1':

    case '2':

    case '3':
      quit =true;
      break;
    }
  }
}
