#ifndef __COM_CLIENT_H__
#define __COM_CLIENT_H__

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "communication.h"


typedef int SOCKET;

sockaddr_in sin;
SOCKET sock;
socklen_t recsize = sizeof(sin);

sockaddr_in csin;
SOCKET csock;
socklen_t crecsize = sizeof(csin);

int sock_err;
char buffer[32];

class Com_Client : public Communication
{
	public:
		Com_Client(); // constructeur, associe la socket reseau
		~Com_Client();

		 // se connecte au serveur a l'adresse IP ou hostname designer par hostaddress
		void connecter(const std::string adresse_hote);
		int transmettre_action(std::string);
		int transmettre_message(std::string);
};

#endif /* __COM_CLIENT_H__ */