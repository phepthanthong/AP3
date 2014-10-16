#include "JoueurNoir.h"

JoueurNoir::JoueurNoir(Echiquier &e){
  //cout << "Contructeur par defaut: JoueurNoir" << endl;

  e.m_cases[3]=&roi;
  roi.setNom("r");
  roi.setX(3);
  roi.setY(0);
  
  e.m_cases[4]=&re;
  re.setNom("d");
  re.setX(4);
  re.setY(0);
  
  for (int i = 0; i<2; i++){
    e.m_cases[0+i*7]=&t[i];
    e.m_cases[1+i*5]=&c[i];
    e.m_cases[2+i*3]=&f[i];
    
    t[i].setX(i*7);
    t[i].setY(0);
    c[i].setX(i*5+1);
    c[i].setY(0);
    f[i].setX(i*3+2);
    f[i].setY(0);
    
    t[i].setNom("t");
    c[i].setNom("t");
    f[i].setNom("f");
  }
  
  for (int i = 0; i<8; i++){
    e.m_cases[8+i]=&p[i];
    
    p[i].setX(i);
    p[i].setY(1);
    p[i].setNom("p");
  }
}

JoueurNoir::~JoueurNoir(){
  //cout << "Destructeur JoueurNoir" << endl;
}

JoueurNoir::JoueurNoir(string nom): Joueur(nom,false){
  //cout << "Contructeur avec parametre: JoueurNoir" << endl;
  /*for (int a = 0; a<16; a++)
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
	    }*/
}
