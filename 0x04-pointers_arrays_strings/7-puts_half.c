#include "holberton.h"

/**
 * puts_half - Prints the second half of the input string to stdout
 * @str: the string to be printed
 **/
void puts_half(char *str)
{
	int l = 0, i;

	while (*(str + l) != '\0')
		l++;
	for (i = (l % 1 == 0) ? l / 2 : (l + 1) / 2; i < l; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
