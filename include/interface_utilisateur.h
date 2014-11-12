#ifndef __INTERFACE_JEU_H__ // identifiant c -> toujours en majuscule (par convention)
#define __INTERFACE_JEU_H__

#include <iostream>

class Interface_Utilisateur
{
public:
	std::string entree_clavier;
	std::string lire_entree();
	//string actualiser_ecran(string)
};

#endif