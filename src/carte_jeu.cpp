#include "carte_jeu.h"

//carte du monde : initialisation des zones
Carte_Jeu::Carte_Jeu()
{	
	//cr�ation de la zone initiale
	p_liste_zones=new Zone();
	/*cout << "bonjour et bienvenue dans notre super jeu de la mort qui tue" << endl;*/
	return;
};

int Zone::nb_zone=0;

Zone::Zone()
{
	//chaque zones 
	description="Voici la zone Num 1";
	num_zone=nb_zone++;
	/* �quivalent �:
	num_zone=nb_zone;
	nb_zone++;
	*/
	
	/*l'inverse :
	num_zone=++nb_zone;
	est �quivalent �:
	nb_zone++;
	num_zone=nb_zone;
	*/
	return;
};

std::string Zone::decrire()
{
	return description;
};