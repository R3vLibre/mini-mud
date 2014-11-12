#ifndef __ELEMENTS_JEU_H__ // identifiant c -> toujours en majuscule (par convention)
#define __ELEMENTS_JEU_H__

#include <iostream>
#include "carte_jeu.h"
#include "communication.h" // pour appeler "traiter_action()"

class Joueur
{
private:
	Zone *p_zone_courante; 				// adresse vers un objet de type Zone
	std::string nom_joueur;
	//std::string main_droite="";
	//std::string main_gauche="";
	//std::string equipement_porte="";
public:
	Joueur(std::string, Zone*); // déclaration du constructeur
	std::string traiter_action(std::string); // si l'action est contenu dans le tableau des actions possibles return appeler action
};

#endif
