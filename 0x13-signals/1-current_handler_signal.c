#include "signals.h"

/**
 * current_handler_signal - Retrieves the current handler of the SIGINT signal
 *
 * Return:  function pointer of the handler, NULL on failure
 **/
void (*current_handler_signal(void))(int)
{
	return (signal(SIGINT));
}
