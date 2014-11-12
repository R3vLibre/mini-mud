#include "com_client.h"

Com_Client::Com_Client(){

}

void Com_Client::connecter(const std::string adresse_hote){

	/*char buffer[32]= ""; */ // sent by server || envoyé par le serveur

	sock = socket(AF_INET, SOCK_STREAM, 0);
	sin.sin_addr.s_addr = inet_addr(adresse_hote.c_str());
	sin.sin_family = AF_INET;
	sin.sin_port = htons(23);

	sock_err = bind(sock, (sockaddr*)&sin, recsize);

	if(connect(sock, (sockaddr*)&sin, sizeof(sin)) != -1)
	{
		printf("connexion à %s sur port %d\n", inet_ntoa(sin.sin_addr),htons(sin.sin_port));
		if(recv(sock, buffer, 32, 0) != -1)
			printf("Recu : %s\n", buffer);
	}
	else 
	{
	  printf("connexion impossible\n");
	}
}

int Com_Client::transmettre_action(std::string action)
{
	return 0;	
}

int Com_Client::transmettre_message(std::string message)
{
      cout << "Fonction transmettre_message() non gérée côté client" << endl;
      return -1;
}

std::string Com_Client::recevoir_message()
{
	std::string message;
	
	//lire le message sur le reseau
	message = ""; //à remplacer par la chaine receptionnée sur la socket
	
	return message;
}