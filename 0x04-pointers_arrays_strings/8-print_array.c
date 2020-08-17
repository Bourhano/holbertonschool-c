#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints the input array of int to stdout
 * @a: array of int to print
 * @n: number of ints to print
 **/
void print_array(int *a, int n)
{
	int l = 0;

	if (n > 0)
	{
		for (l = 0; l < n - 1; l++)
			printf("%d, ", *(a + l));
		printf("%d\n", *(a + n - 1));
	}
	else
		printf("\n");
}
