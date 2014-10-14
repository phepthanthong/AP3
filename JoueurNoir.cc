#include "JoueurNoir.h"

JoueurNoir::JoueurNoir(){
  cout << "Contructeur par defaut: JoueurNoir" << endl;
}

JoueurNoir::~JoueurNoir(){
  cout << "Destructeur JoueurNoir" << endl;
}

JoueurNoir::JoueurNoir(string nom): Joueur(nom,false){
  cout << "Contructeur avec parametre: JoueurNoir" << endl;
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
		_tab[a].setNom("Xe");
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
