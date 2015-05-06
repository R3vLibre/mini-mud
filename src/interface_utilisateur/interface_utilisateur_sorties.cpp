#include <SDL2/SDL.h>
#include <iostream>

#include "interface_utilisateur.h"
#include "monde.h"

#define CHEMIN_IMAGES "./ressources/images/"


std::string Interface_Utilisateur::actualiser_ecran(Zone zone,std::list<Element_Jeu> liste_elements)
{
  // variable privée -> joueur (créee temporairement dans interface_utilisateur.h
  // (nb_intercases = 3) constante prévue dans le module interface_utilisateur (en sortie)
  
  // Afficher le fond qui correspond à la zone (zone.name) 
      //std::string name = zone.name;
  // récuperer coorodonnées de la case du joueur
  // Centrer la camera sur le joueur
  
  // Boucle sur les elements de la ZONE   



    // 3 variables -> image_zone - ecran - ecran_jeu
    SDL_Surface* image_zone = NULL;

    // but instead of creating a renderer, we can draw directly to the screen
    ecran_jeu = SDL_GetWindowSurface(ecran);
    
    // Charger image 
    // image_chargee = charger_image(zone.nom,".bmp");
    
    // TEMPORAIRE -> arg : name
    // TEMPORAIRE -> Selectionner image à afficher
    std::string name = "zone_initiale";
    image_zone = charger_image(name,".bmp");
    //

    //Apply image to ecran
    SDL_BlitSurface( image_zone, NULL, ecran_jeu, NULL ); 

    SDL_Delay(20000);

    SDL_FreeSurface(image_zone);
    SDL_UpdateWindowSurface(ecran);
};


SDL_Surface* Interface_Utilisateur::charger_image(std::string nom_image,std::string extension)
{
    SDL_Surface* image = NULL;

    // Chemin de l'image
    std::string chemin_temporaire = CHEMIN_IMAGES + nom_image + extension;
    const char* chemin_image = chemin_temporaire.c_str();
    
    // Charger image
    image = SDL_LoadBMP(chemin_image);

    return image;
}

// NE PAS MODIFIER 
// element_jeu.h et .cpp 
// joueur.cpp
// monde 
// moteur 

//MOI
// interface_utilisateur_sortie