#include "com_client.h"

Com_Client::Com_Client(){

}

void Com_Client::connecter(char *hostaddress){

	/*char buffer[32]= ""; */ // sent by server

	sock = socket(AF_INET, SOCK_STREAM, 0);
	sin.sin_addr.s_addr = inet_addr(hostaddress);
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
		printf("connexion impossible\n");
}

std::string Com_Client::transmettre_action(){
	return 0;	
}

std::string Com_Client::transmettre_message(){
	return 0;
}

