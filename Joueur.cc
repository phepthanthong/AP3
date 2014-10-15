#include "Joueur.h"
int Joueur::comp = 0;
Joueur::Joueur(){
  cout << "Constructeur par defaut: Joueur" << endl;
  /*
  if (comp = 0)
    {
      _estBlanc = true;
      for (int a = 0; a<16; a++)
	{
	  if (a<8)
	    {
	      _tab[a].setNom("Chot");
	      _tab[a].setX(a);
	      _tab[a].setY(1);
	    }
	  else
	    {
	      _tab[a].setY(0);
	      _tab[a].setX(a-8);
	      if (a==8 || a==15)
		_tab[a].setNom("Xe");
	      else if (a==9 || a == 14)
		_tab[a].setNom("Ma");
	      else if (a==10 || a==13)
		_tab[a].setNom("Tuong");
	      else if (a==11)
		_tab[a].setNom("vuia");
	      else if (a==12)
		_tab[a].setNom("Hasu");
	    }
	}
    }
  else 
    {
      _estBlanc = false;
      for (int a = 0; a<16; a++)
	{
	  if (a<8)
	    {
	      _tab[a].setNom("PION");
	      _tab[a].setX(a);
	      _tab[a].setY(6);
	    }
	  else
	    {
	      _tab[a].setY(7);
	      _tab[a].setX(a-8);
	      if (a==8 || a==15)
		_tab[a].setNom("TOUR");
	      else if (a==9 || a == 14)
		_tab[a].setNom("CAVALIER");
	      else if (a==10 || a==13)
		_tab[a].setNom("Tuong");
	      else if (a==11)
		_tab[a].setNom("ROI");
	      else if (a==12)
		_tab[a].setNom("REINE");
	    }
	}
    }      
  comp++;
  */
}
  
Joueur::~Joueur(){
  cout << "Destructeur: Joueur" << endl;
}

Joueur::Joueur(string nom, bool estBlanc){
  //cout << "Constructeur avec parametre: Joueur" << endl;
  _nom = nom;  
  _estBlanc = estBlanc;
}

void Joueur::infoJoueur(){
  //cout << "Nom : " << _nom << endl;  
  /*for (int i = 0; i<16; i++)
    {
      cout << "numero: " << i << endl;
      _tab[i].infoPiece();
      }*/
  
  cout << "Nom : " << _nom << endl;
  if ( _estBlanc  )
    cout << "Couleur : Blanc " << endl;
  else if ( !_estBlanc )
    cout << "Couleur : Noir " << endl;
  /*for (int i = 0; i<16; i++)
    {
      cout << "numero: " << i << endl;
      _tab[i].infoPiece();
      }*/
}
