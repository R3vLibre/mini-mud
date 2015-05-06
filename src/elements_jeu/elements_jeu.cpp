#include <iostream>

#include "elements_jeu.h"
#include "interface_utilisateur.h"

/* Module décrivant tous les éléments de jeu */

Element_Jeu::Element_Jeu(std::string nom_element, Zone* p_zone_initiale)
{
    nom = nom_element; // enregistre le nom
    p_zone_courante = p_zone_initiale; // enregistrement de la position du joueur
}

Element_Jeu::~Element_Jeu()
{

}
