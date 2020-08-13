#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z'+1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
