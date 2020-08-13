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
	long p = 2, pp = 1, f;

	printf("1, 2, ");
	while (c < 50)
	{
		f = p + pp;
		pp = p;
		p = f;
		if (c != 49)
			printf("%ld, ", f);
		else
			printf("%ld", f);
		c++;
	}
	printf("\n");
	return (0);
}
