#include <SDL2/SDL.h>
#include <iostream>
#include "interface_utilisateur.h"

Interface_Utilisateur::Interface_Utilisateur(std::string nom_application)
{
  
    const char * titre_fenetre;
  
    std::cout<<"Créer interface utilisateur '" << nom_application << "'\n" ;
    this->nom_application = nom_application;
    titre_fenetre = this->nom_application.c_str(); 
    
      //Les images 
    SDL_Window* ecran = NULL;

    //Start SDL       
    SDL_Init( SDL_INIT_VIDEO );

    //Set up ecran 
    ecran = SDL_CreateWindow(titre_fenetre,this->posX_init_fenetre,this->posY_init_fenetre,this->largeur_fenetre, this->hauteur_fenetre, SDL_WINDOW_SHOWN );
}

Interface_Utilisateur::~Interface_Utilisateur()
{
    std::cout<<"Détruire interface utilisateur";

    //Quit SDL 
    SDL_Quit();
}


// commune
int Interface_Utilisateur::initialiser_interface()
{
    std::cout<<"Initialiser interface utilisateur";
}

