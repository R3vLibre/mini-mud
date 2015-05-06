#ifndef __ELEMENT_JEU__
#define __ELEMENT_JEU__
#include <iostream>
//#include "communication.h"


class Element_Jeu;
class Joueur;

#include "monde.h"
#include "interface_utilisateur.h"


class Element_Jeu
{
    public:
        Element_Jeu(std::string, Zone*);
        ~Element_Jeu();
        std::string nom;
    protected:
        // adresse vers un objet de type Zone
        Zone *p_zone_courante;
};
  
class Joueur: public Element_Jeu
{
    public:
        // déclaration du constructeur
        Joueur(std::string, Zone*);
        ~Joueur();
        // si l'action est contenu dans le tableau des actions possibles return appeler action
        std::string traiter_action(std::string);
        std::string activer_interface(Interface_Utilisateur *);
        void desactiver_interface();
        void actualiser_affichage();
        std::string obtenir_entree();
    private:
        Interface_Utilisateur* p_interface_utilisateur;
        //std::string main_droite="";
        //std::string main_gauche="";
        //std::string equipement_porte="";
};


//voirePerso
//voireCase f(zone)	
//std::string action;

		// je lui envoi le std::string "action"
		// il verifie si 
		// verifier si je peux aller au nord (verifier sur ta case)
		// il me renvoie

#endif