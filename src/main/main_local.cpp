#include <iostream>
#include <stdlib.h>

#include "moteur_jeu.h"
#include "interface_utilisateur.h"

int main(int argc, char *argv[])
{
    Interface_Utilisateur interface;
    Moteur_Jeu moteur(&interface);
    std::cout<<"démarrage du mini-mud\n";
    
    /*
     * commençons par initialiser le moteur et lancer le moteur : init(Moteur) lancerJeu()
     * Class Moteur créer interface et créer le monde (-> printf ("monde crée")).
     */
    
    /* faire un Del de l'interface de jeu : faire un destructeur de l'objet pointé */
    
    /*
     * //boucle principale
     * while (description != "quitter()")
     * {
     * entree = if.lire_entree();
     * com.transmettre_action(entree);
     * moteur.derouler_jeu();
     * }
     */
    
    exit(0);
}