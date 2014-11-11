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
char buffer[32]= "";

class Com_Client : public Communication
{
	public:
		Com_Client();
	
		void connecter();
		std::string transmettre_action();
		std::string transmettre_message();
};

