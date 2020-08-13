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
	unsigned long long int p = 2, pp = 1, f;

	printf("1, 2, ");
	while (c < 97)
	{
		f = p + pp;
		pp = p;
		p = f;
		printf("%I64d, ", f);
		c++;
	}
	printf("%I64d\n", p + pp);
	return (0);
}
