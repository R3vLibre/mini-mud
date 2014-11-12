#ifndef __MOTEUR_JEU_H__ // identifiant c -> toujours en majuscule (par convention)
#define __MOTEUR_JEU_H__

#include <iostream>

class Moteur_Jeu
{
	public:
		Moteur_Jeu();              //constructeur == initialiser_jeu()
		~Moteur_Jeu();           //destructeur
		std::string quitter_jeu();
};

#endif