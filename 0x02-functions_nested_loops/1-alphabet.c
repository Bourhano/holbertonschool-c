#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z'+1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}
