#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: 0 - always succed.
 */
int main(void)
{
	int c = 1;
	long p = 2, pp = 1, f, s = 2;

	while (c < 38)
	{
		f = p + pp;
		pp = p;
		p = f;
		if ((f % 2) == 0)
			s += f;
		c++;
	}
	printf("%ld\n", s);
	return (0);
}
