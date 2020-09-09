#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: the binary number
 *
 * Return: the number as unsigned int type
 **/
unsigned int binary_to_uint(const char *b)
{
	const char *save = b;
	unsigned int i, len = 0, nb = 0, j, mul;
	int ctl = 1;

	if (b == 0)
		return (0);
	while (*b != 0 && ctl)
	{
		ctl = *b == '0' || *b == '1';
		len++;
		b++;
	}
	if (!ctl)
		return (0);
	b = save;
	for (i = 0; i < len; i++)
	{
		mul = 1;
		for (j = len - 1; j > i; j--)
			mul *= 2;
		if (b[i] == '1')
			nb += mul;
	}
	return (nb);
}
