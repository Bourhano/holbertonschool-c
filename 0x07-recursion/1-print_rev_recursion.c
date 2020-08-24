#include "holberton.h"

/**
 * _print_rev_recursion - Prints the inverse of the input string recursively
 * @s: string to print recursively
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
