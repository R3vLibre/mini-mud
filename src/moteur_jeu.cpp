#include <iostream>

#include "moteur_jeu.h"

//lancement du jeu
Moteur_Jeu::Moteur_Jeu(Interface_Utilisateur *interface_utilisateur)
{
    std::cout<< "Initialisation de Moteur_Jeu\n";
    
    //code du constructeur
    p_interface = interface_utilisateur;
    Joueur* joueur;
    
    p_monde = new Monde;
    joueur = p_monde->ajouter_joueur("Joueur");
    joueur->activer_interface(p_interface);
    liste_joueurs.insert(liste_joueurs.end(), *joueur);
    p_interface->initialiser_interface(joueur);
    
    return;
    
}

Moteur_Jeu::~Moteur_Jeu()
{
    
}

std::string Moteur_Jeu::lancer_jeu()
{
    /* boucle type : while jeu actif : actualiser affichage; lire évènement; avancer jeu. */
    
    std::string entree;
    
    jouer = true;
    //boucle principale
    while (this->jouer)
    {
        liste_joueurs.front().actualiser_affichage();
        entree =  liste_joueurs.front().obtenir_entree();
        derouler_jeu(entree);
    }
}

void Moteur_Jeu::derouler_jeu(std::string evenements_joueurs)
{
    std::cout<<"prise en charge des entrées du jeu (" << evenements_joueurs << ") et résolution des évènements annexes/n";
}

//quitter le jeu
void Moteur_Jeu::quitter_jeu()
{
    //code du joueur
    jouer = false;
    std::cout<<"quitter le jeu/n";
    return;
}

//arreter le jeu
