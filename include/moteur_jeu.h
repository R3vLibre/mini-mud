#ifndef __MOTEUR_JEU__
#define __MOTEUR_JEU__
#include <iostream>

#include "interface_utilisateur.h"

class Moteur_Jeu
{
public:
  Moteur_Jeu(Interface_Utilisateur *);              //constructeur == initialiser_jeu()
  ~Moteur_Jeu();           //destructeur
  std::string quitter_jeu();

private:
  Interface_Utilisateur *interface;
};
#endif