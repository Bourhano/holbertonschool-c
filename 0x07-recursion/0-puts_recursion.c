#include "holberton.h"

/**
 * _puts_recursion - Prints the input string recursively
 * @s: string to print recursively
 **/
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
