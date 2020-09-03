#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer that takes in a string
 **/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
