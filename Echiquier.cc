/** 
 * Mise en oeuvre de Echiquier.h
 *
 * @file Echiquier.cxx
 */

#include <iostream>
// A besoin de la declaration de la classe
#include "Echiquier.h"

using namespace std;

/**
 * Constructeur par défaut.
 * Initialise à vide l'echiquier.
 */
Echiquier::Echiquier()
{
  cout << "Constructeur par defaut: Echiquier" << endl;
  for (int a = 0; a<64; a++)
    m_cases[a] = new Piece;

  /*for (int i = 0; i<8; i++){
    for (int j = 0; j<8; j++){
      m_cases[j+i*8]->setX(j);
      m_cases[j+i*8]->setY(i);
      if ( i%2 == j%2 )
	m_cases[j+i*8]->setCouleur(true);
      else
	m_cases[j+i*8]->setCouleur(false);
    }
    }*/
}


/**
 * Recupere la piece situee sur une case.
 *
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 0 si aucune piece n'est sur cette case et un pointeur
 * vers une piece sinon.
 */
Piece* Echiquier::getPiece( int x, int y )
{
  if ( (m_cases[x+y*8]->getX()==x) && (m_cases[x+y*8]->getY() == y))	    return m_cases[x+y*8];    
  else
    return 0; 
 
}

  
/**
 * Place une piece sur l'echiquier, aux coordonnees specifiees dans la piece.
 *
 * @param p un pointeur vers une piece
 *
 * @return 'true' si le placement s'est bien passe, 'false' sinon
 * (case occupee, coordonnees invalides, piece vide )
 */
bool Echiquier::placer( Piece* p )
{
  int x = p->getX();
  int y = p->getY();
  return( (getPiece(x,y) == 0) 
	  && p->bonEndroit()
	  && (p->getNom() !="")
	  );
}


/**
 * Deplace une piece sur l'echiquier, des coordonnees specifiees
 * dans la piece aux coordonnees x,y. 
 *
 * @param p un pointeur vers une piece
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 'true' si le placement s'est bien passe, 'false' sinon
 * (case occupee, coordonnees invalides, piece vide, piece pas
 * presente au bon endroit sur l'echiquier)
 */
bool Echiquier::deplacer( Piece* p, int x, int y )
{
  return( (getPiece(x,y) == 0) 
	  && (x>=0) && (x<8)
	  && (y>=0) && (y<8)
	  && (p->getNom() !="")
	  && p->bonEndroit()
	  );
}


/**
 * Enleve la piece situee sur une case (qui devient vide).
 *
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 0 si aucune piece n'est sur cette case et le pointeur
 * vers la piece enlevee sinon.
 */
Piece* Echiquier::enleverPiece( int x, int y )
{
}


/**
 * Affiche l'echiquier avec des # pour les cases noires et . pour
 * les blanches si elles sont vides, et avec B pour les pieces
 * blanches et N pour les pieces noires.
 */
 void Echiquier::affiche()
 {
   cout << endl << "   1 2 3 4 5 6 7 8" << endl;
   for ( int y = 0; y < 8; ++y )
     {
       cout << y+1 << " ";
       for ( int x = 0; x < 8; ++x )
	 {
	  string c;
	  Piece* p = getPiece( x, y );
	  
	  if ( p == 0  ) 
	    c = ( ( x + y ) % 2 ) == 0 ? "#" : ".";
	  else 
	    c = p->getNom();
	  cout <<" " << c;
	 }
       cout << "  " << y+1 << endl;
     }
   cout << "   8 7 6 5 4 3 2 1" << endl;
 }
   
