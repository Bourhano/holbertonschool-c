#include "holberton.h"

/**
 * print_rev - Prints the inverse of the input string to stdout
 * @s: the string to be printed
 *
 * Return: none
 **/
void print_rev(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;
	while (l > 0)
		_putchar(*(s + --l));
	_putchar('\n');
}
