#include "JoueurBlanc.h"

JoueurBlanc::JoueurBlanc(Echiquier &e){
  //cout << "Constructeur par defaut: JoueurBlanc" << endl;
  
  e.m_cases[59]=&roi;
  roi.setNom("R");
  roi.setX(3);
  roi.setY(7);
  
  e.m_cases[60]=&re;
  re.setNom("Q");
  re.setX(4);
  re.setY(7);

  for (int i = 0; i<2; i++){
    e.m_cases[56+i*7]=&t[i];
    e.m_cases[57+i*5]=&c[i];
    e.m_cases[58+i*3]=&f[i];

    t[i].setX(i*7);
    t[i].setY(7);
    c[i].setX(i*5+1);
    c[i].setY(7);
    f[i].setX(i*3+2);
    f[i].setY(7);

    t[i].setNom("T");
    c[i].setNom("C");
    f[i].setNom("F");
  }

  for (int i = 0; i<8; i++){
    e.m_cases[48+i]=&p[i];

    p[i].setX(i);
    p[i].setY(6);
    p[i].setNom("P");
  }
}

JoueurBlanc::~JoueurBlanc(){
  //cout << "Destructeur: JoueurBlanc" << endl;
}

JoueurBlanc::JoueurBlanc(string nom) : Joueur(nom,true){
  cout << "Constructeur avec parametre: JoueurBlanc" << endl;
  /*for (int a = 0; a<16; a++)
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
	    }*/
}
