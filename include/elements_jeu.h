#include <iostream>
//#include "communication.h"
#include "carte_jeu.h"



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


//voirePerso
//voireCase f(zone)	
//std::string action;

		// je lui envoi le std::string "action"
		// il verifie si 
		// verifier si je peux aller au nord (verifier sur ta case)
		// il me renvoie