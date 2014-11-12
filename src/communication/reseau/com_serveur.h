#ifndef __COM_SERVEUR_H__ // identifiant c -> toujours en majuscule (par convention)
#define __COM_SERVEUR_H__

#include "communication.h"
typedef enum
{
    com_serveur_erreur=-1,
	com_serveur_non_initialise=0,
	com_serveur_initialise=1,
	com_serveur_pret=2
	
}etats_com_serveur_t;


class Com_Serveur : public Communication 
{
public:
	Com_Serveur();	// constructeur (de même nom que la classe) 
	void etablir_connexion(void);
	std::string recevoir_action();
	~Com_Serveur(); // destructeur (de même nom que la classe)
private:
    int sock_serveur;
	int sock_client;
	etats_com_serveur_t etat;
};

#endif //__CLASSE_H__ (fin du if __CLASSE_H__)