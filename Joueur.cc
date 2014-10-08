#include "Joueur.h"

Joueur::Joueur()
{
  cout << "Contructeur par defaut: Joueur" << endl;

  if (comp == 0)
    {
      _couleur = "Blanc";
      _nom = "Joueur 1";
      for (int i = 0; i<2; i++)
	{
	  for (int j = 0; j<8; j++)
	    {
	      tab[j] = j;
	    }
	  tab[i] = i;
	}
      comp++;
    }
  else 
    {
      _couleur = "Noir";
      _nom = "Joueur 2";
      
    }
      
}

Joueur::~Joueur()
{
  cout << "Destructeur: Joueur" << endl;
}

Joueur::Joueur(string nom, string couleur)
{
  _nom = nom;
  _couleur = couleur;
}
