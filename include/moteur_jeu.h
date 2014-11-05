#include <iostream>

class Moteur_Jeu
{
	public:
		Moteur_Jeu();              //constructeur == initialiser_jeu()
		~Moteur_Jeu();           //destructeur
		std::string quitter_jeu();
};