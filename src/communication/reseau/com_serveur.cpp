#include "com_serveur.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#define PORT 23

//g++ -Wall -ansi -I /cygdrive/c/Users/Florian/dev/mini-mud/include/ com_serveur.cpp -c // à supprimer

Com_Serveur::Com_Serveur() // intialisation du serveur (une seule foi)
{
    // Socket et contexte d'adressage du serveur
    struct sockaddr_in sin;
    socklen_t recsize = sizeof(sin);
	
	int sock_err_1;
	// etat de départ du serveur (non initialisé)
	etat=com_serveur_non_initialise;
    
	// Création d'une socket
	sock_serveur = socket(AF_INET, SOCK_STREAM, 0);
	
	// Si la socket est valide
	if(sock_serveur != -1)
	{
		printf("La socket %d est maintenant ouverte en mode TCP/IP\n", sock_serveur);
		// Configuration
		sin.sin_addr.s_addr = htonl(INADDR_ANY);  /* Adresse IP automatique */
		sin.sin_family = AF_INET;                 /* Famille de protocole: Protocole IP */
		sin.sin_port = htons(PORT);               /* Listage du port */
		
		sock_err_1 = bind(sock_serveur, (struct sockaddr*)&sin, recsize);
		if (sock_err_1 < 0)
		{ 
			perror("bind");
			etat=com_serveur_erreur; 
		}
	}
	else
	{ 
		perror("socket()"); //fonction interne au systeme qui affiche l'erreur de la derniere fonction systeme (texte_personnalisé en argument)
		etat=com_serveur_erreur;
	}
	
	etat=com_serveur_initialise; // serveur initialisé 
	return;
}

void Com_Serveur::etablir_connexion()
{
	/* Socket et contexte d'adressage du client */
    struct sockaddr_in csin; // on déclare une structure vide de type sockaddr_in
    socklen_t crecsize = sizeof(csin);
    
	if((etat == com_serveur_initialise)
	||(etat == com_serveur_pret)) // trouer un moyen pour que plusieurs utilisateurs puissent se connecter
	{
		int sock_err_2;
		// Si la socket fonctionne -> listen
		// Démarrage du listage (mode server)
		sock_err_2 = listen(sock_serveur, 5); // autorise 5 connections en même temps
		printf("Listage du port %d...\n", PORT);
		if(sock_err_2 < 0)
		{
		perror("Fonction listen()");
		etat=com_serveur_erreur;
		} //serveur erreur

		// Si la socket fonctionne -> accepter connection
		else
		{
			/* Attente pendant laquelle le client se connecte */
			printf("Patientez pendant que le client se connecte sur le port %d...\n", PORT);
			sock_client = accept(sock_serveur, (struct sockaddr*)&csin, &crecsize); 
			printf("Un client se connecte avec la socket %d de %s:%d\n", sock_client, inet_ntoa(csin.sin_addr), htons(csin.sin_port));
			etat=com_serveur_pret; // pour "envoyer_un_message()" l'etat doit être "PRET"
		}
	}			
}


std::string Com_Serveur::recevoir_action()
{
if(etat==com_serveur_pret)
	{
		static char reception_donnees[256]; // (gêle la reservation d'un bloc memoire) static evite d'allouer et désallouer automatiquement la memoire 
		std::string donnees_recues;
		int errors = recv(sock_client, reception_donnees, sizeof(reception_donnees), 0);
		if(errors!=-1)
		{
//		std::string donnees_recues(reception_donnees);
		donnees_recues = reception_donnees; // conversion explicite vers std::string
		return donnees_recues; // sortie de la fonction
		}
		//else etat=com_serveur_erreur;
	}
	return ""; // conversion automatique de c en std::string 
}


Com_Serveur::~Com_Serveur() // destruction
{
	/* Fermeture de la socket client et de la socket serveur */
	printf("Fermeture de la socket client\n");
	close(sock_client);
	printf("Fermeture de la socket serveur\n");
	close(sock_serveur);
	printf("Fermeture du serveur terminée\n");
}

