#include "elements_jeu.h"
#include "interface_utilisateur.h"

//definition du constructeur
Joueur::Joueur(std::string nom, Zone *p_zone_initiale) 
{
	nom_joueur = nom; // enregistre le nom
	p_zone_courante = p_zone_initiale; // enregistrement de la position du joueur
};

std::string Joueur::traiter_action(std::string action) // cette fonction peut et sera appelé par la Comunication
{
  std::string retour_action;//var locale
    if(action == "voir")
    { 
      retour_action=p_zone_courante->decrire();
      
    } //je demande à la zone_courante de me renvoyer sa description
  
  return retour_action; // a revoir
};


//Communication.transmettre_message(retour_action); // servira lorsque les evenements seront a l'origine du jeu
