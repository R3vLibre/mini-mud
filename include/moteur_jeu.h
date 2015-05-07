#ifndef __MOTEUR_JEU__
#define __MOTEUR_JEU__
#include <iostream>
#include <list>

#include "interface_utilisateur.h"
#include "monde.h"
#include "elements_jeu.h"

class Moteur_Jeu
{
public:
    //constructeur == initialiser_jeu()
    Moteur_Jeu(Interface_Utilisateur *);
    //destructeur
    ~Moteur_Jeu();
    void quitter_jeu();
    std::string lancer_jeu();

private:
    void derouler_jeu(std::string);
    Interface_Utilisateur *p_interface;
    bool jouer;
    Monde* p_monde;
    std::list<Joueur> liste_joueurs;
};
#endif
