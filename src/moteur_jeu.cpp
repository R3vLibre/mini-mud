#include <iostream>

#include "moteur_jeu.h"

//lancement du jeu
Moteur_Jeu::Moteur_Jeu(Interface_Utilisateur *interface_utilisateur)
{
  std::cout<< "Initialisation de Moteur_Jeu\n";
  //code du constructeur
  interface = interface_utilisateur;
  
  return;
}
Moteur_Jeu::~Moteur_Jeu()
{

}
//quitter le jeu
std::string Moteur_Jeu::quitter_jeu()
{
  //code du joueur
  return "quitter()";
}

//arreter le jeu