#include "signals.h"

/**
 * gotcha - Handles the SIGINT signal
 * @signo: number of the received signal
**/
static void gotcha(int signo)
{
	printf("Gotcha! [%d]\n", signo);
	signal(signo, gotcha);
}

/**
 * handle_signal - Sets a handler for the signal SIGINT
 *
 * Return:  0 on success, or -1 on error
 **/
int handle_signal(void)
{
	signal(SIGINT, gotcha);
	return (0);
}
