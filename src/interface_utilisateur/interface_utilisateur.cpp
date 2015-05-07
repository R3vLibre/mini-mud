#include <iostream>
#include "interface_utilisateur.h"

Interface_Utilisateur::Interface_Utilisateur(std::string nom_application)
{
  
    const char * titre_fenetre;
  
    std::cout<<"Créer interface utilisateur '" << nom_application << "'\n" ;
    this->nom_application = nom_application;
    titre_fenetre = this->nom_application.c_str(); 
    
    // ecran 
    ecran = NULL;

    //Start SDL       
    SDL_Init( SDL_INIT_VIDEO );

    //Set up ecran 
    ecran = SDL_CreateWindow(titre_fenetre,this->posX_init_fenetre,this->posY_init_fenetre,this->largeur_fenetre, this->hauteur_fenetre, SDL_WINDOW_SHOWN );
    //rendu_ecran = SDL_CreateRenderer(ecran, -1, SDL_RENDERER_SOFTWARE);

    if (ecran == NULL) {
      std::cerr << "Erreur dans création instance Interface_Utilisateur: " << std::string(SDL_GetError());
    }
}

Interface_Utilisateur::~Interface_Utilisateur()
{
    std::cout<<"Détruire interface utilisateur";
    SDL_DestroyWindow(ecran);
    SDL_Quit();
}


// commune
int Interface_Utilisateur::initialiser_interface(Joueur* ref_joueur)
{
    std::cout<<"Initialiser interface utilisateur";
    p_joueur = ref_joueur;
}
