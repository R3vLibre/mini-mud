#ifndef __MONDE__
#define __MONDE__
#include <iostream>
#include <list>


class Zone;

#include "elements_jeu.h"

class Zone
{
public:
    static int nb_zone;
    // constructeur
    Zone(std::string nom_zone);
    // destructeur
    ~Zone();
    std::string decrire();
    std::list<Element_Jeu> lister_elements();
private:
    int num_zone;
    std::string nom;
    std::string description;
    std::list<Element_Jeu> liste_elements;
};

class Monde
{
public:
    // constructeur
    Monde();
    // destructeur
    ~Monde();
    //methodes
    Joueur* ajouter_joueur(std::string);
    //attributs
    Zone* p_zone_initiale;
private:
    //chaque zone connait le(s) pointeur(s) de sa (ses) zone(s) adjacente(s)
    std::list<Zone> liste_zones;
};

#endif // __MONDE__