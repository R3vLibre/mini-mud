#include <iostream>
#include <string>

#include "monde.h"
#include "elements_jeu.h"

//carte du monde : initialisation des zones

Monde::Monde()
{
    //création de la zone initiale
    p_zone_initiale = new Zone("zone_initiale");
    liste_zones.insert(liste_zones.end(), *p_zone_initiale);
    return;
}


Joueur* Monde::ajouter_joueur(std::string nom_joueur)
{
    Joueur* joueur;
    joueur = new Joueur(nom_joueur, p_zone_initiale);
    return joueur;
}

////----------------------- changement de classe ---------------------------------////

int Zone::nb_zone=0;

Zone::Zone(std::string nom_zone)
{
    //chaque zones
    num_zone = nb_zone;
    nom = nom_zone;
    //description="Voici la zone Num "+ std::to_string(num_zone);
    description="Voici la zone " + nom;
    
    return;
}

Zone::~Zone()
{
}


std::string Zone::decrire()
{
    return description;
}

std::list<Element_Jeu> Zone::lister_elements()
{
    return liste_elements;
}

