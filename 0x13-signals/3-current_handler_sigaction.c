#include "signals.h"

/**
 * current_handler_sigaction - Retrieves the current handler of SIGINT signal
 *
 * Return:  function pointer of the handler, NULL on failure
 **/
void (*current_handler_signal(void))(int)
{
	struct sigaction old_action;

	sigaction (SIGINT, NULL, &old_action);
	return (&old_action);
}
