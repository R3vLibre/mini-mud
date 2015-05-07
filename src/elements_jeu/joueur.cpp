#include "elements_jeu.h"
#include "interface_utilisateur.h"

//definition du constructeur
Joueur::Joueur(std::string nom_joueur, Zone *p_zone_initiale): Element_Jeu(nom_joueur, p_zone_initiale)
{
  p_interface_utilisateur = NULL;
};

Joueur::~Joueur()
{
    
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


void Joueur::activer_interface(Interface_Utilisateur* p_if_utilisateur)
{
    p_interface_utilisateur = p_if_utilisateur;
};

void Joueur::desactiver_interface()
{
    p_interface_utilisateur = NULL;
};

void Joueur::actualiser_affichage()
{
    p_interface_utilisateur->actualiser_ecran(p_zone_courante, p_zone_courante->lister_elements());
};

std::string Joueur::obtenir_entree()
{
    return p_interface_utilisateur->lire_entree();
};

/* activer_interface(interface_utilisateur) // désactiver_interface() // actualiser affichage // obtenir_entrée qui appelle les équivalents sur interface_utilisateur //*/

//Communication.transmettre_message(retour_action); // servira lorsque les evenements seront a l'origine du jeu
