#include "carte_jeu.h"

//carte du monde : initialisation des zones
Carte_Jeu::Carte_Jeu()
{	
	//création de la zone initiale
	p_liste_zones=new Zone();
	/*cout << "bonjour et bienvenue dans notre super jeu de la mort qui tue" << endl;*/
	return;
}

int Zone::nb_zone=0;

Zone::Zone()
{
	//chaque zones 
  num_zone = nb_zone;
  description="Voici la zone Num "+string(num_zone);


	return;
}

std::string Zone::decrire()
{
	return description;
}
