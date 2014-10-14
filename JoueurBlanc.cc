#include "JoueurBlanc.h"
#include "Tour.h"
JoueurBlanc::JoueurBlanc(Echiquier &e){
  cout << "Constructeur par defaut: JoueurBlanc" << endl;
  e.tab[0]=&t[0];
  t[0].setNom("Tb");
  e.tab[7]=&t[1];

}

JoueurBlanc::~JoueurBlanc(){
  cout << "Destructeur: JoueurBlanc" << endl;
}

JoueurBlanc::JoueurBlanc(string nom) : Joueur(nom,true){
  cout << "Constructeur avec parametre: JoueurBlanc" << endl;
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
	      else if (a == 9 || a == 14)
		_tab[a].setNom("Ma");
	      else if (a == 10 || a==13)
		_tab[a].setNom("Tuong");
	      else if (a == 11)
		_tab[a].setNom("vuia");
	      else if (a == 12)
		_tab[a].setNom("Hasu");
	    }
	}
}
