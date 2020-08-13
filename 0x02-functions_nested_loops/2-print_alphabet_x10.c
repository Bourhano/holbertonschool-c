#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c != 'z' + 1)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
