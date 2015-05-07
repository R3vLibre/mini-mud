#include <iostream>
#include <stdlib.h>

#include "moteur_jeu.h"
#include "interface_utilisateur.h"

int main(int argc, char *argv[])
{
    Interface_Utilisateur interface("Mini-Mud");
    Moteur_Jeu moteur(&interface);
    std::cout<<"démarrage du mini-mud\n";
    moteur.lancer_jeu();
    
    /*
     * commençons par initialiser le moteur et lancer le moteur : init(Moteur) lancerJeu()
     * Class Moteur créer interface et créer le monde (-> printf ("monde crée")).
     */
    
    /* TODO :
     * faire un Del de l'interface de jeu : faire un destructeur de l'objet pointé 
     * ajouter une fonction d'initialisation du monde dans l'init du moteur
     * ici il faut appeler la fonction : moteur.lancerJeu
     * lancerjeu : actualiser l'affichage, lire les évènements et avancer jeu.*/


    exit(0);
}
