#include "sockets.h"

/**
 * main - opens an IPv4/TCP socket, and listens to traffic on port 12345
 *
 * Return: 0
 */
int main(void)
{
	int servSock;
	struct sockaddr_in echoServAddr = {0};

	servSock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (servSock < 0)
		printf("socket() failed");

	echoServAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	echoServAddr.sin_family = AF_INET;
	echoServAddr.sin_port = htons(12345);

	if (bind(servSock, (struct sockaddr *) &echoServAddr,
		sizeof(echoServAddr)) < 0)
		printf("bind() failed");
	if (listen(servSock, 10) < 0)
		printf("listen() failed");
	printf("listening...\n");
	for (;;)		;
	return (0);
}
