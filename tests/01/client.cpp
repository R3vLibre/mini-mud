#include "client.h"
#include <iostream>
/*#include "com_serveur.h"*/
/*                ____________             ______
 *               |            |           |      |
 *--Construc()-->| Initialise |---???---->| Pret |--------->[sortie]
 *               |____________|           |______|
 */
// le client :
// ouvre une connection avec le serveur
// éxecute le(s) scénario(s) de teste :
//	- envoie un paquet de donnée [transmettre_action(action)]
//	- attent la réponse du serveur.
//	- vérifie la réponse.
// envoie le résultat "réuissite" ou "erreur" à Lancement.

/* appeler transmettreAction() et transmettreMessage() */

int verifier_echange_reseau(Com_Client &, const std::string);

int main (int argc, char *argv[])
{
//créer un objet client : innitialise la socket
	Com_Client client;
	//le texte à transmettre :
	std::string donnees="Bonjour !";
	//création de l'élément adresse_serveur :
	std::string adresse_serveur;
	int resultats_tests;

	//établie la connexion avec le serveur
	adresse_serveur = "127.0.0.1";
	client.connecter(adresse_serveur);

	//teste réseau
	if (verifier_echange_reseau(client, donnees) == 0)
	{
	  //Test ok : retour shell = 0
	  resultats_tests = 0;
	}
	else 
	{
          //Test nok(Not OK) : retour shell > 0
	  resultats_tests = 1;
	}

	return resultats_tests;
};

//envoyer une donner recevoir le retour et verifier si correspond à l'attendu :
//& : référence de l'élément, un pointeur déguisé.

int verifier_echange_reseau(Com_Client &client, const std::string donnees_envoyees)
{
	int resultat;
	//création du stockage du message renvoyé par le serveur en passant par le client
	std::string infos_recues;

	//Décrit le test
	std::cout << "===========================================================" << std::endl;
	std::cout << "* Vérification de la transmission de " << donnees_envoyees << std::endl;
	//appelle de la fonction transmettre_action()
	client.transmettre_action(donnees_envoyees);

	//receptionner le message de retour et le comparer au message envoyé : donnees_envoyees
	if (donnees_envoyees.compare(infos_recues) != 0)
	{
	  std::cout << "    OK" << std::endl;
	  resultat = 0;
	}
	else
	{
	  std::cout << "    NOK" << std::endl;
	  resultat = -1;
	}

	//réussit=0 ou raté=-1
	return resultat;
}