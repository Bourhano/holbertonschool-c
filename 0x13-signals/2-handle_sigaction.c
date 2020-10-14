#include "signals.h"

/**
 * gotcha - Handles the SIGINT signal
 * @signo: number of the received signal
**/
static void gotcha(int signo)
{
	printf("Gotcha! [%d]\n", signo);
	signal(signo, gotcha);
	fflush(stdout);
}

/**
 * handle_sigaction - Sets a handler for the signal SIGINT
 *
 * Return:  0 on success, or -1 on error
 **/
int handle_sigaction(void)
{
	struct sigaction new_action;

	new_action.sa_handler = gotcha;
	sigemptyset (&new_action.sa_mask);
	new_action.sa_flags = 0;
	return (sigaction(SIGINT, &new_action, NULL));
}
