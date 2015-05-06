#ifndef __INTERFACE_UTILISATEUR__
#define __INTERFACE_UTILISATEUR__
#include <iostream>
#include <list>
#include <SDL2/SDL.h>
#include "elements_jeu.h"


//using namespace std;  // Eviter les collisions entre une des mes fonctions qui porterait le meme nom qu'une fonction d'une librairie
					    // Le fait d'écrire std::max dit au compilateur de chercher explicitement la fonction max du namespace std::. 
					    // NE JAMAIS METTRE de using namespace std dans le main !!!
// g++ -Wall -ansi -I /cygdrive/c/Users/Florian/dev/mini-mud/include/ interface_utilisateur.cpp -c   

class Interface_Utilisateur
{
  public:
    Interface_Utilisateur(std::string);          // constructeur
    ~Interface_Utilisateur();                    // destructeur

    std::string entree_clavier;
    std::string lire_entree();
    std::string actualiser_ecran(Zone,std::list<Element_Jeu>);
    
  private:
    int initialiser_interface();
    SDL_Surface* charger_image(std::string nom_image,std::string extension);
    static const int largeur_fenetre = 1024;
    static const int hauteur_fenetre = 768;
    static const int profondeur_couleurs = 32;
    static const int posX_init_fenetre = 0;
    static const int posY_init_fenetre = 0;
    static const int nb_intercases = 3;
    std::string nom_application;
    SDL_Window* ecran;
    SDL_Surface* ecran_jeu;
    int largeur_case;
    int hauteur_case;
    
    
    Joueur joueur();
};

#endif