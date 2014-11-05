#include <iostream>

class Zone
{
	public:
		static int nb_zone;
		Zone();         // constructeur
		~Zone();     // destructeur
		std::string decrire();
	private:
		int num_zone;
		std::string description;
};

class Carte_Jeu
{
	public:
		Carte_Jeu();          // constructeur
		~Carte_Jeu();      // destructeur
	private:
		Zone * p_liste_zones;
		//chaque zone connait le(s) pointeur(s) de sa (ses) zone(s) adjacente(s)
};

